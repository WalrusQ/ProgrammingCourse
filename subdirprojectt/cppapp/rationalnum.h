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
    RationalNum(int num1 = 2, int num2 = 7);
    void Copy(RationalNum);
    void sum(int);
    void Multi(int);
    void divide(int);
    double ToDouble();
private:

};
class DevNull:public exception{
public:


};

#endif // RATIONALNUM_H
