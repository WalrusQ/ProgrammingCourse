#include"array_without_nulls.h"

int array_not_zero(int* array, int size){
    int k, i;
       for (i=0; i<size; i++){

        for (k=1; k<size-i; k++){

            if (array[i] == 0){

                array[i] = array[i+k];
                array[i+k] = 0;

            }
            else break;
        }
    }

    for (i = 0; i < size;i++){

        if (array[i] == 0) {k = i;
            break;
        }

    }
    return k;
      }


