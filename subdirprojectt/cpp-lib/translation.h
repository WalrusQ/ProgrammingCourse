#ifndef TRANSLATION_H
#define TRANSLATION_H
#include <cmath>

class Translation
{
private:
    double radian;
    int sec;
    int min;
    int degree;
    
public:
    Translation(double rad = 0.5);
    void convert();
};

#endif // TRANSLATION_H