#include "ui_check_string.h"
#include "check_string.h"

void ui_check_string(){
    printf("Input text");
    char string[256] = "Abrakadabra";
    char sentence[256];
    char word[256];
    printf("%s \n" , string);


  check_string(string, sentence, word);


printf("Ola");
}
