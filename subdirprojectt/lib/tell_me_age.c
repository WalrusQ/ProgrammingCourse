#include "tell_me_age.h"

int tell_me_age(int age){

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


