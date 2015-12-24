#include "rationalnum.h"


RationalNum::RationalNum(int num1, int num2)/// Список инициализации
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
    if (Num == 0){
        DevNull error;
        throw error;
    }
    denominator *= Num;}

RationalNum RationalNum::operator/(int Num){
    if (Num == 0){
        DevNull error;
        throw error;
    }
    RationalNum n;
    n.denominator /= Num;
    return n;
}

double RationalNum::ToDouble(){
    return((double)numerator / double(denominator));
}

