#ifndef CHECK_SIZZLING_H
#define CHECK_SIZZLING_H
#include<string>
using std::string;

class check_sizzling
{

public:
    check_sizzling();
    /// может быть они private?
    /// где const?
    /// переименовать
    string find_symbol(const string);
    int check_symbol(char);

};

#endif // CHECK_SIZZLING_H
