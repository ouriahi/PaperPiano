#ifndef PIANO_DETECT_HPP
#define PIANO_DETECT_HPP

#include <vector>

class PianoDetect {
public:
    PianoDetect();
    ~PianoDetect();

    void detectKeys(const std::vector<int>& inputData);

private:

};

#endif