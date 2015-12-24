#include "check_sizzling.h"


std::string check_sizzling::find_symbol_and_change_if_need(string text) const
{
    int i;
    for(i=0; i<20; i++)
        if (text[i] == 'r' || text[i] == 'n'||text[i] == 'v')
            switch(check_symbol(text[i+1])){
            case 0:
                text[i+1] = 'a';
                break;
            case 1:
                text[i+1] = 'u';
                break;
            case 2:
                text[i+1] = 'e';
                break;
            default: break;

            }
    return text;
}

int check_sizzling::check_symbol(char vowel) const
{
    if(vowel == 'e') return 0;
    if(vowel == 'i') return 1;
    if(vowel == 'y') return 2;
    return 3;
}

