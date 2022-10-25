#include "main.h"


char setpin[i];
// extern int loop;

int setPin()
{
setPin:
    printf("\nSet your pin\nat least 4 digits\n: ");
    scanf("%s", &setpin);
    // at least 4 characters can also be done
    // Another area to check

    if ((setpin[i] >= 'a' && setpin[i] <= 'z') || (setpin[i] >= 'A' && setpin[i] <= 'Z') || (atoi(setpin) < 1000 || atoi(setpin) > 9999))
    {
        printf("Pin must contain 4 digits\n");
        goto setPin;
    }
    // else if (atoi(setpin) < 1000 || atoi(setpin) > 9999)
    // {
    //     printf("Pin only contain 4 digits\n");
    //     goto setPin;
    // }
    return *setpin;
}
