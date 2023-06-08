// global includes
#include <AudioProcessor.h>
#include "RPC.h"
#include <Arduino_PortentaBreakout.h>
#include <Arduino.h>

// m7 includes

#include <SDCardReaderAndWriter.h>

#include <SDRAM.h>
#include <NeuralNetwork.h>

#include "FirmwareLoader.h"
#include "testAudio.h"
NeuralNetwork *nn = nullptr;
float mockdata [128][547][1];

// m7 defines
SDCardReaderAndWriter sdcard;
AudioProcessor audio_processor;

int led = LEDB;
tfLiteModel_t model;

void setup()
{
  Serial.begin(115200);

  while (!Serial);
  Serial.println("M7 booted");

  pinMode(led, OUTPUT);

  for(int x; x < 128; x++){
    for(int y; y < 547; y++){
        mockdata[x][y][0] = 1;
      }
   }
  model = loadTfliteModel();

  char buffer[64];
  auto len = sprintf(buffer, "The address of ptr is %x on the M7", (unsigned int)model.data);
  Serial.write(buffer, len);
  Serial.println();
  for (int i = model.size - 50; i < model.size; i++)
  {
    Serial.print(model.data[i], HEX);
    Serial.print(",");
  }
  Serial.println();
  int input_shape[3] = {128,547,1};
  int tensor_arena_size = 1024*1024*5;
  nn = new NeuralNetwork(model.data, tensor_arena_size, 11, input_shape);
  audio_processor = AudioProcessor();

}

void loop()
{
  delay(1000);
  Serial.println("Hello from m7");
  delay(100);
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led, LOW);
  Serial.println("Converting Audio:");
  
  auto converted_audio = audio_processor.ConvertToModeldata(test_audio);

  nn->InputData(converted_audio);
  NeuralNetwork::result_t prediction = nn->Predict();
  Serial.print("Got predicted class: ");
  Serial.print(prediction.class_name);
  Serial.print(", with a confidence of : ");
  Serial.println(prediction.confidence);


}
