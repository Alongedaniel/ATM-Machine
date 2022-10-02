#include <stdio.h>
#include "main.h"

int main()
{
    int option;

    /**
     * This is the interface for the ATM
     */
    printf("\tATM MACHINE\n");
    printf("********************************\n");
    printf("********************************\n");
    printf("********************************\n\n");

    /**
     * Request your name
     */
    printf("Enter your name: ");
    char fname;
    char lname;

    scanf("%s ", &fname);
    scanf("%s", &lname);
    if (!(((fname >= 'a') && (fname <= 'z')) || ((fname >= 'A') && (fname <= 'Z'))) && !(((lname >= 'a') && (lname <= 'z')) || ((lname >= 'A') && (lname <= 'Z'))))
    {
        printf("Name only letters\n");
        main();
    }

    // else
    // {

    int loop = 0;

    // int setpin;
    // printf("\nSet your pin\nat least 4 digits\n: ");
    // scanf("%d", &setpin);
    // // at least 4 characters can also be done
    // if ((setpin < 1000) || (setpin > 9999))
    // {
    //     printf("\nPin must contain 4 digits");
    //     loop = -1;
    //     // printf("\nEnter your pin: ");
    // }
    // else
    // {
    //     loop = 0;
    // }
    setPin();

    while (loop >= 0)
    {

        // int enterpin;
        // printf("\nEnter your pin: ");
        // scanf("%d", enterpin);
        // if (enterpin = setpin)
        // {
        /**
         * @brief
         *
         */

        printf("\n\t Hello, Welcome to ATM\n");

        /**
         * ATM options
         */

        printf("\n1: Airtime\t\t\t2: Withdrawal\n\n3: Transfer\t\t\t4: Change Pin\n\n5: Check Balance\t\t6: Quit\n\n");

        printf("Select option: ");
        scanf("%d", &option);
        if (option == 1)
        {
            printf("\tAirtime\n");
            // DO AIRTIME
        }
        else if (option == 2)
        {
            printf("\tWithdrawal\n");
            // DO WITHDRAWAL
        }
        else if (option == 3)
        {
            printf("\tTransfer\n");
            // DO TRANSFER
        }
        else if (option == 4)
        {
            printf("\tChange Pin\n");
            // DO CHANGE PIN
        }
        else if (option == 5)
        {
            printf("\tCheck Balane\n");
            // DO CHECK Balance
        }
        else if (option == 6)
        {
            printf("Are you sure you want to quit?1-yes/2-no ");
            int end;
            scanf("%d", &end);
            if (end == 1)
            {
                loop = -1;
            }
            else if (end == 2)
            {
                loop = 0;
            }
            // else {
            //     printf("\nSelect a valid option: ");
            //     scanf("%d", &end);
            // }
        }
        else
        {
            printf("\n\nSelect a valid option");
        }
        // }
        // else{
        //     printf("wrong pin");
        //     loop = 0;
        // }
        int menu;
        printf("Press 1 to go to main menu and 0 to exit: ");
        scanf("%d", &menu);
        if (menu == 1)
        {
            loop = 0;
        }
        else
        {
            printf("Thank you for banking with us!");
            loop = -1;
        }
    }
    loop++;

    return 0;
}