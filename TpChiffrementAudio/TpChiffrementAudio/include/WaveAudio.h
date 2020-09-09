#ifndef WAVEAUDIO_H
#define WAVEAUDIO_H

#include <fstream>
#include <string.h>
using namespace std;

class WaveAudio
{
    public:
        typedef unsigned char byte;

        FILE *WavFile;
        const char *WavName;
        short int *WavBuffer;
        int NumChannels;
        int SampleRate;
        int BitsPerSample;
        int WaveAudioBuffer;
        long ByteRate;

        WaveAudio();
        WaveAudio(const char *FileName);
        int GetNextBuffer();
        virtual ~WaveAudio();

    protected:

    private:
};

#endif // WAVEAUDIO_H
