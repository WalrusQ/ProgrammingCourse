#include"ui_conversation.h"
#include "double_even_numbers.h"

void ui_conversation(){
    int input_num;
    printf("Input number:\n");
    scanf("%d", &input_num);
    printf("%d", double_even_numbers(input_num));
}
