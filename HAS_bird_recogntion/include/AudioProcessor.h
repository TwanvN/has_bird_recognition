#ifndef AUDIO_PROCESSOR_H
#define AUDIO_PROCESSOR_H


#include "librosa.h"
#include <vector>
class AudioProcessor {
    public:
        AudioProcessor(){};
        ~AudioProcessor(){};

        typedef float (*inputData)[128][547][1];

        float[128][547][1] ConvertToModeldata(unsigned char* x);


    private:
};


#endif