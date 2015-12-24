#include "ui_array.h"
#include"matrix.h"
#include<stdlib.h>
void ui_array_without_nulls(){
    int size = 20;
    int* array = (int*) malloc(sizeof(int)*size) ;
    int i;

    FILE *myfile = fopen("myfile.txt", "r");
    for(i = 0; i< size; i++)
        fscanf(myfile, "%d", &array[i]);

    fclose(myfile);

    int k = array_not_zero(array, size);

    FILE *output = fopen("Output.txt", "w");
    int* new_array = (int*) malloc(sizeof(int)*20);
    for (i=0; i<k; i++){

        new_array[i] = array[i];
        fprintf(output,"%d ", new_array[i]);

    }
    fclose(output);
    free(array);
    free(new_array);
    printf("Done.\n");
}
