#ifndef TELL_ME_AGE_H
#define TELL_ME_AGE_H
#include<string>
using std::string;


class tell_me_age
{
private:
    int age;
public:
    tell_me_age(int input = 12);
    int checking_age() const;
    string text_to_out(const int) const;
};

#endif // TELL_ME_AGE_H
