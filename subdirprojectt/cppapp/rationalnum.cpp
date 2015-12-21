#include "rationalnum.h"
#include <iostream>

RationalNum::RationalNum(int num1, int num2)
{
    numerator = num1;
    denominator = num2;
}
void RationalNum::Copy(RationalNum numb){
    numerator = numb.numerator;
    denominator = numb.denominator;
}
void RationalNum::sum(int num){
    numerator += num*denominator;
}
void RationalNum::Multi(int Num){
    numerator *= Num;
}
void RationalNum::divide(int Num){
    denominator /= Num;
}
double RationalNum::ToDouble(){
    return((double)numerator / double(denominator));
}

