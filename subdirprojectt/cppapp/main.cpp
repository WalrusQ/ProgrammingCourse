#include <iostream>
#include"rationalnum.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    RationalNum Num;
    RationalNum Numb(1,8);
    Num.Multi(2);
    Num.sum(1);
    Num.divide(5);
    Num.Copy(Numb);
    cout << Numb.ToDouble() << endl;
     cout << Numb.ToDouble() << endl;

    return 0;
}

