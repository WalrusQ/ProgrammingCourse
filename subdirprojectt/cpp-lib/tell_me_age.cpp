#include "tell_me_age.h"

tell_me_age::tell_me_age(int input)
{
    age = input;
}

int tell_me_age::checking_age() const
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

std::string tell_me_age::text_to_out(const int years) const
{
    switch(years){
    case 0: return ("лет");
    case 1: return ("года");
    case 2: return ("год");
    }
    return ("этого не будет все равно");
}

