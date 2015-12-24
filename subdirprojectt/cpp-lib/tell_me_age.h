#ifndef TELL_ME_AGE_H
#define TELL_ME_AGE_H


class tell_me_age
{
private:
    int age;
public:
    tell_me_age(int input = 12);
    int checking_age();
    /// Переделать в оператор <<
    void output();
};

#endif // TELL_ME_AGE_H
