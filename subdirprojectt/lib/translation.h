#ifndef TRANSLATION_H
#define TRANSLATION_H

#ifdef __cplusplus
extern "C" {
#endif
#include<math.h>

typedef struct
{
int sec;
int min;
int degree;
}Angle ;
void translation(double, Angle*);
#ifdef __cplusplus
}
#endif

#endif // TRANSLATION_H

