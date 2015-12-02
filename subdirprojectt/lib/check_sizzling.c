
#include"check_slizzing.h"

void check_slizzing(char string){
    int i;
    for(i=0; i<100; i++)
        if (string[i] == 'ж' || string[i] == 'ч'||string[i] == 'ш' ||string[i] == 'щ')
            switch(check_vowel(string[i+1])){
            case 0:
                string[i+1] = 'а';
                break;
            case 1:
                string[i+1] = 'у';
                break;
            case 2:
                string[i+1] = 'и';
                break;
            default: break;
            }

}
int check_vowel(char vowel){
    if(vowel == 'Я') return 0;
    if(vowel == 'Ю') return 1;
    if(vowel == 'Ы') return 2;
    return 3;

}

