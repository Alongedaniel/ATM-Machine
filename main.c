#include <stdio.h>
#include "main.h"
#include <string.h>

float Balance = 100000;

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
        printf("\nName should contain letters only\n\n");
        main();
    }

    // Set up pin
    setPin();
//
    int loop = 0;
    menu:
    while (loop >= 0)
    {
        /**
         * @brief
         *
         */

        printf("\n\tHello %s, Welcome to ATM\n", &lname);

        /**
         * ATM options
         */

        printf("\n1: Airtime\t\t\t2: Withdrawal\n\n3: Transfer\t\t\t4: Change Pin\n\n5: Check Balance\t\t6: Quit\n\n");

        printf("Select option: ");
        scanf("%d", &option);
        if (option == 1)
        {
            // printf("\tAirtime\n");
            // DO AIRTIME
            Airtime();
        }
        else if (option == 2)
        {
            printf("\tWithdrawal\n");
            // DO WITHDRAWAL
        }
        else if (option == 3)
        {
            // printf("\tTransfer\n");
            // DO TRANSFER
            Transfer();
            printf("Your balance is %.2f\n", Balance);
        }
        else if (option == 4)
        {
            Change_pin();
            // DO CHANGE PIN
        }
        else if (option == 5)
        {
            Check_balance();
            // DO CHECK Balance
        }
        else if (option == 6)
        {
            printf("Are you sure you want to quit?1-yes/2-no ");
            int end;
            scanf("%d", &end);
            if (end == 1)
            {
                goto exit;
            }
            else if (end == 2)
            {
                goto menu;
            }

        }
        else
        {
            printf("\n\nSelect a valid option");
        }

        int menu;
        printf("Press 1 to perform another transaction or 0 to exit: ");
        scanf("%d", &menu);
        if (menu == 1)
        {
            loop = 0;
        }
        else
        {
            exit:
            printf("Thank you for banking with us!");
            loop = -1;
        }
    }
    loop++;

    return 0;
}