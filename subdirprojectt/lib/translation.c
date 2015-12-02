#include "translation.h"


void translation(double radian, Angle* angle)
{

    double tmp = radian * 180 / 3.14;
    angle->degree = floor(tmp);

    tmp = (tmp-floor(tmp)) * 60;
    angle->min = floor(tmp);

    tmp = (tmp - floor(tmp)) * 60;
    angle->sec = floor(tmp);

    
}

