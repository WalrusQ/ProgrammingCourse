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
    Translation(const double rad = 0.5);
    void convert();
    int getSec(Translation &) const;
    int getMin(Translation &) const;
    int getDegree(Translation &) const;
};

#endif // TRANSLATION_H
