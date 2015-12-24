#ifndef RATIONALNUM_H
#define RATIONALNUM_H
#include <iostream>
#include <exception>
using namespace std;

class RationalNum
{
    int numerator;
    int denominator;
public:
    /// Параметры переименовать
    RationalNum(int num1 = 1, int num2 = 8);
    void Copy(RationalNum);
    /// Перегрузить операторы
    void sum(int);
    void Multi(int);
    void divide(int);
    double ToDouble();
    RationalNum operator/(int);
private:

};
class DevNull:public exception{
public:


};

#endif // RATIONALNUM_H
