#include "translation.h"

Translation::Translation(double rad)
{
 radian = rad;

}

void Translation::convert(){
    double tmp = radian * 180 / 3.14;
    degree = floor(tmp);

    tmp = (tmp-floor(tmp)) * 60;
    min = floor(tmp);

    tmp = (tmp - floor(tmp)) * 60;
    sec = floor(tmp);
}

