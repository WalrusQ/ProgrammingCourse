
#include "ui_check_sizzling.h"
#include"check_sizzling.h"
#include <stdlib.h>
#include<stdio.h>

void ui_check_sizzling(){
    int size = 20;
    char* string = (char*) malloc(size);
    FILE * textfile = fopen("somefile", "r");
           fgets(string,size, textfile);
    fclose(textfile);
    check_sizzling(string, size);
    FILE * outfile = fopen("outfile", "w");
    fprintf(outfile,"%s", string);
    fclose(outfile);
}
