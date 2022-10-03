#include <stdio.h>

int setPin()
{
    int loop;
    int setpin;
    printf("\nSet your pin\nat least 4 digits\n: ");
    scanf("%d", &setpin);
    // at least 4 characters can also be done
    if ((setpin < 1000) || (setpin > 9999))
    {
        printf("Pin must contain 4 digits\n");
        loop = -1;
        setPin();
    }
    else
    {
        return setpin;
        loop = 0;
    }
}