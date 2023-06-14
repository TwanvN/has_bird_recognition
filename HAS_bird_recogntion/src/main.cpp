// global includes
#include "RPC.h"
#include <Arduino.h>

// m7 includes
#include <Arduino_PortentaBreakout.h>
#include <LoRaConnection.h>
#include <CayenneLPP.h>
#include <SDRAM.h>
#include <NeuralNetwork.h>
#include <SDCardReaderAndWriter.h>

// m7 defines
//LoRaConnection loraConnection;
//CayenneLPP cayenne(51);
SDCardReaderAndWriter sdcard;

void setup()
{
  Serial.begin(115200);
  // setupM4Firmware();

  //loraConnection = LoRaConnection();

  //loraConnection.InitConnection();
  // InitHASFSM();
  // birdSensorFSM.setup(FSM_States::STATE_INITIALIZING,
  // FSM_Events::EVENTS_STATE_EXECUTED);
  // bootM4();
    while (sdcard.InitSDCardReaderAndWriter()) {
    delay(1000);
  }
}

void loop()
{
    Serial.println("Start write");

    sdcard.WriteToSDCard(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    Serial.println("Data written");

    delay(1000);
}