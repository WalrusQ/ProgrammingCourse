
#include"check_sizzling.h"

void check_sizzling(char* string, int size){
    int i;
    for(i=0; i<size; i++)
        if (string[i] == 'r' || string[i] == 'n'||string[i] == 'v')
            switch(check_vowel(string[i+1])){
            case 0:
                string[i+1] = 'a';
                break;
            case 1:
                string[i+1] = 'u';
                break;
            case 2:
                string[i+1] = 'e';
                break;
            default: break;

            }

}
int check_vowel(char vowel){
    if(vowel == 'e') return 0;
    if(vowel == 'i') return 1;
    if(vowel == 'y') return 2;
    return 3;

}

