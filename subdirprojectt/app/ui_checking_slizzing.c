
#include <ui_check_slizzing.h>
#include <stdlib.h>
#include<stdio.h>

void ui_check_slizzing(){
    int i;
    char* string = (char*) malloc(200);
    FILE * textfile = fopen("somefile", "r");
    for (i=0; i<3; i++)
    fgets(string,199, textfile);
    fclose(textfile);
    check_slizzing(string);
    FILE * outfile = fopen("outfile", "w");
    fprintf(outfile,"%s", string);
    fclose(outfile);
}
