#include "main.h"

extern char setpin[i];

int Change_pin()
{
    char newPin[i];
    char oldPin[i];
    char confirmNew[i];

    printf("\t======== CHANGE PIN ========\n");
    char change[2][10] = {"Change", "Back"};
    for (int q = 0; q < 2; q++)
    {
        printf("%d. %s", q + 1, change[q]);
        printf("\n");
    }

    int f;
    printf("\n: ");
    scanf("%d", &f);

    if (f == 1)
        goto old;
    if (f == 2)
        ;
    return 0;
old:
    printf("\nENTER OLD PIN: ");
    scanf("%s", oldPin);
    if (strcmp(oldPin, setpin) != 0)
    {
        printf("Incorrect old pin!");
        goto old;
    }

    new : printf("\nENTER NEW PIN: ");
    scanf("%s", newPin);
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
    confirm:
        printf("\nCONFIRM NEW PIN: ");
        scanf("%s", confirmNew);
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
    return *setpin;
}