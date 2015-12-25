#include "array.h"
#include "iostream"

Array::Array(int size)
{
    this->size = size;
    pointer = new int[this->size];
    for (int i = 0; i < this->size; i++)
        pointer[i] = 0;

}

Array::Array(Array & array)
{
    size = array.size;
    pointer = new int [size];
    for (int i = 0; i < size; i++)
        pointer[i] = array[i];
}



void Array::operator=(Array & array)
{
    delete [] pointer;
    size = array.size;
    pointer = new int [size];
    for (int i = 0; i < size; i++)
        pointer[i] = array[i];
}

int Array::operator[](int i) const
{
    return pointer[i];
}

Array::~Array()
{
    delete [] pointer;
}

void Array::delete_nulls(Array & array)
{   Array tmparray;
    tmparray = array;
    delete [] array.pointer;
    int k, i;
    for (i=0; i<tmparray.size; i++){

        for (k=1; k<tmparray.size-i; k++){

            if (tmparray.pointer[i] == 0){

                tmparray.pointer[i] = array.pointer[i+k];
                tmparray.pointer[i+k] = 0;

            }
            else break;
        }
    }
    for (i = 0; i < tmparray.size;i++)

        if (array.pointer[i] == 0) {k = i;
            break;
        }
    array.pointer = new int[k];

    for (i=0; i<k; i++)

        array.pointer[i] = tmparray.pointer[i];


}
