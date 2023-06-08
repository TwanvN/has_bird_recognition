#include <AudioProcessor.h>

inputData AudioProcessor::ConvertToModeldata(unsigned char *mic_data){

    float* float_data;
    int data_size = sizeof(mic_data)/mic_data[0];
    for( int i = 0; i< data_size; i++){
        float_data[i] = (float)mic_data[i];
    }
    float output[128][547][1]; 
    std::vector<float> audio_input(float_data, float_data + data_size);
    //calculate mfcc
    auto mfcc_output =  librosa::Feature::mfcc(audio_input, 16000,256,512,"hann",false, "edge", 2, 256, 27, 8000,128, false, 2);
    for(int i = 0; i < 128; i++){
        for(int j = 0; j < 547; j++){
            output[i][j][0] = mfcc_output[i][j];
        }
    }

    return output;
}