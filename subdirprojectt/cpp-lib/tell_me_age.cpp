#include "tell_me_age.h"

tell_me_age::tell_me_age(int input)
{
    age = input;
}

int tell_me_age::checking_age()
{
    enum years {Ages, Year, Years};
    if
            ((age >= 11) && (age <= 14) )
        return Ages;
    if ( ((age % 10) < 5) && ((age % 10 ) > 1) )
        return Year;
    if ((age % 10) == 1)
        return Years;
    return Ages;
}

