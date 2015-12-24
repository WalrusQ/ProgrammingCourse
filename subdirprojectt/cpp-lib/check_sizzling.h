#ifndef CHECK_SIZZLING_H
#define CHECK_SIZZLING_H
#include<string>
using std::string;

class check_sizzling
{
private:
    string text;
public:
    check_sizzling(string sometext = "restart nimfa vyrer");
    string find_symbol();
    int check_symbol(char);

};

#endif // CHECK_SIZZLING_H
