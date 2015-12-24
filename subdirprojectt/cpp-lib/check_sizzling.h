#ifndef CHECK_SIZZLING_H
#define CHECK_SIZZLING_H
#include<string>
using std::string;

class check_sizzling
{

public:
    string find_symbol_and_change_if_need(const string text = "restart nimfa vywern") const;
private:
    int check_symbol(const char) const;

};

#endif // CHECK_SIZZLING_H
