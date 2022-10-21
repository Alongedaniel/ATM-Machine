#include <stdio.h>

extern int setpin;

int Change_pin(){
    int newPin;
    int oldPin;

    printf("\t======== Change Pin ========\n");
    old:
    printf("\nEnter old pin: ");
    scanf("%d", &oldPin);
    new:
    if (oldPin == setpin){
        printf("\nEnter new pin: ");
        scanf("%d", &newPin);
        if ((newPin < 1000) || (newPin > 9999)) {
            printf("Pin must contain 4 digits\n");
            goto new;
        } else {
            setpin = newPin;
            printf("Pin changed Successfully\n");
        }
    }
    else {
        printf("Incorrect old pin!");
        goto old;
    }
    return newPin;
}