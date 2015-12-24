#include"matrix.h"


/// нет тут речи про матрицу
/// magic number 20 надо вынести, например, в мактос
int matrix_not_zero(int* array){
    int k, i;
       for (i=0; i<20; i++){

        for (k=1; k<20-i; k++){

            if (array[i] == 0){

                array[i] = array[i+k];
                array[i+k] = 0;

            }
            else break;
        }
    }
       /// Зачем это
    printf("\n");
    for (i = 0; i < 20;i++){

        if (array[i] == 0) {k = i;
            break;
        }

    }
    return k;
      }


