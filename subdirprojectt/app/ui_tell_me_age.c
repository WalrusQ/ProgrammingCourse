#include "ui_tell_me_age.h"
#include "tell_me_age.h"

void ui_tell_me_age(){
    int age;
    printf("Input your age.\n");
    scanf("%d", &age);
    int ans = tell_me_age(age);
    switch(ans){
    case 0: printf("Вам %d лет!", age); break;
    case 1: printf("Вам %d года!", age); break;
    case 2: printf("Вам %d год!", age); break;
    }
}
