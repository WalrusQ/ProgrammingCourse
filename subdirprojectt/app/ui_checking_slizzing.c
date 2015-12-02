
#include <ui_check_slizzing.h>

void ui_check_slizzing(){
    char string[100];
    FILE * textfile = fopen("inText.txt", "r");
    fgets(string,99, textfile);
    fclose(textfile);
    check_slizzing(string);
}
