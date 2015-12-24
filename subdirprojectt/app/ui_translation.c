#include "ui_translation.h"
#include "translation.h"

void ui_translation()
{
    Angle angle;
    double radian;
    printf("Input the angle in radians:\n");
    scanf("%lf", &radian);
    translation(radian, &angle);
    printf("Degree: %d, Minutes: %d, Seconds: %d\n", angle.degree, angle.min, angle.sec);
}
