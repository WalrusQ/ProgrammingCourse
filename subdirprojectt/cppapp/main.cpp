#include"rationalnum.h"



int main()
{try{
    cout << "Hello World!" << endl;
    RationalNum Num;
    RationalNum Numb(1,8);
    Num.Multi(2);
    Num.sum(1);
    Num.divide(0);
    Num.Copy(Numb);
    cout << Numb.ToDouble() << endl;
     cout << Numb.ToDouble() << endl;
    }
    catch(DevNull){
        cout << "devnull";
    }


    return 0;
}

