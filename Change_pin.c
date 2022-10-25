#include "main.h"

extern char setpin[i];

int Change_pin()
{
    char newPin[4];
    char oldPin[4];
    char confirmNew[4];

    printf("\t======== Change Pin ========\n");
old:
    printf("\nEnter old pin: ");
    scanf("%s", &oldPin);
    if (strcmp(oldPin, setpin) != 0)
        {
        printf("Incorrect old pin!");
        goto old;
    }

    new :    printf("\nEnter new pin: ");
        scanf("%s", &newPin);
        if ((newPin[i] >= 'a' && newPin[i] <= 'z') || (newPin[i] >= 'A' && newPin[i] <= 'Z') || (atoi(newPin) < 1000 || atoi(newPin) > 9999))
        {
            printf("Pin must contain 4 digits\n");
            goto new;
        }
        else if (strcmp(setpin, newPin) == 0)
        {
            printf("Same as old, enter a different pin");
            goto new;
        }
        else
        {
        confirm :    printf("\nConfirm new pin: ");
            scanf("%s", &confirmNew);
            if ((confirmNew[i] >= 'a' && confirmNew[i] <= 'z') || (confirmNew[i] >= 'A' && confirmNew[i] <= 'Z') || (atoi(confirmNew) < 1000 || atoi(confirmNew) > 9999))
            {
                printf("Pin must contain 4 digits\n");
                goto confirm;
            }
            else if (strcmp(confirmNew, newPin) != 0)
            {
                printf("Wrong new pin\n");
                goto confirm;
            }
            else
            {
                strcpy(setpin, confirmNew);
                printf("Pin changed Successfully\n");
            }
        }
    return *newPin;
}