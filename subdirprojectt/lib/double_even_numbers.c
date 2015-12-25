#include"double_even_numbers.h"

int double_even_numbers(int input_num){


    int output_num = 0, tmp, amount_of_numerals;
    tmp = input_num;

    for (amount_of_numerals=0; tmp > 0; amount_of_numerals++){
        tmp = tmp / 10;
    }

    while(input_num > 0){
        tmp = input_num / pow(10, amount_of_numerals-1);
        int remaining_power = pow(10, amount_of_numerals-1);

        if (tmp % 2 == 0)
            output_num = output_num * 100 + tmp * 10 + tmp;
        else
            output_num = output_num * 10 + tmp;

        input_num = input_num % remaining_power;
        amount_of_numerals--;
    }
    return output_num;
}
