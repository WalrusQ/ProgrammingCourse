#include"ui_conversation.h"
#include "conversation.h"

void ui_conversation(){
    int input_num;
    printf("Input number:\n");
    scanf("%d", &input_num);
    printf("%d", conversation(input_num));
}
