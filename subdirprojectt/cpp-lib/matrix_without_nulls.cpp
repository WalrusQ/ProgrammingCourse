#include "massive_without_nulls.h"

massive_without_nulls::massive_without_nulls()
{
    array = new int[20];
}

void massive_without_nulls::converting_matrix()
{
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
    for (i = 0; i < 20;i++)

        if (array[i] == 0) {k = i;
            break;
        }

new_array = new int[k];
    for (i=0; i<k; i++)

        new_array[i] = array[i];
delete [] new_array;

}

massive_without_nulls::~massive_without_nulls()
{
    delete [] array;
}
