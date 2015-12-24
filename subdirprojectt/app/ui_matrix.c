#include "ui_matrix.h"
#include"matrix.h"
#include<stdlib.h>
void ui_matrix(){
    int* array = (int*) malloc(sizeof(int)*20) ;
    int i;

    FILE *myfile = fopen("myfile.txt", "r");
    for(i = 0; i< 20; i++)
        fscanf(myfile, "%d", &array[i]);

    fclose(myfile);

    int k = matrix_not_zero(array);

    /// снова большая буква
    FILE *Output = fopen("Output.txt", "w");
    int* new_array = (int*) malloc(sizeof(int)*20);
    for (i=0; i<k; i++){

        new_array[i] = array[i];
        fprintf(Output,"%d ", new_array[i]);

    }
    fclose(Output);
    free(array);
    free(new_array);
    printf("Done.\n");
}
