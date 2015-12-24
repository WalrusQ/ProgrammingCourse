#include"ui.h"

void ui_main(){
    printf("1. Radians into degree, min, sec.\n");
    printf("2. How old are you?\n");
    printf("3. Double odd numeral.\n");
    printf("4. Array without zero.\n");
    printf("5. Checking string. \n");
    int choice;
    scanf("%d", &choice);

    switch(choice)
    {

    case 1:
        ui_translation();
        break;

    case 2:
        ui_tell_me_age();
        break;
    case 3:
        ui_conversation();
        break;

    case 4:
        ui_array_without_nulls();
        break;
    case 5:
       ui_check_sizzling();

    }
}
