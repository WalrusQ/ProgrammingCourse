#ifndef RATIONALNUM_H
#define RATIONALNUM_H


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

#endif // RATIONALNUM_H
