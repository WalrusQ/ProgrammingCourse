#include "translation.h"

Translation::Translation(const double rad)
{
    radian = rad;
    degree = 0;
    min = 0;
    sec = 0;
}

void Translation::convert(){
    double tmp = radian * 180 / 3.14;
    degree = floor(tmp);

    tmp = (tmp-floor(tmp)) * 60;
    min = floor(tmp);

    tmp = (tmp - floor(tmp)) * 60;
    sec = floor(tmp);
}

int Translation::getSec(Translation &) const
{
 return sec;
}

int Translation::getMin(Translation &) const
{
    return min;
}

int Translation::getDegree(Translation &) const
{
    return degree;
}

