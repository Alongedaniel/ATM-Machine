#include <stdio.h>
#include "main.h"
#include <string.h>

float Balance = 100000;
extern char setpin[i];

int main()
{
    int option;
    char mypin[4];

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
    printf("ENTER YOUR NAME: ");
    // Make variabes a string
    char fname[30];
    char lname[30];

    scanf("%s ", fname);
    scanf("%s", lname);

    // if (!((((fname >= 'a') && (fname <= 'z')) || ((fname >= 'A') && (fname <= 'Z'))) && (((lname >= 'a') && (lname <= 'z')) || ((lname >= 'A') && (lname <= 'Z')))))
    // {
    //     printf("\nName should contain letters only\n\n");
    //     main();
    // }

    int a, p, x;
    p = strlen(fname);
    for (a = 0; a < p; a++)
    {
        if (!((fname[i] >= 'a' && fname[i] <= 'z') || (fname[i] >= 'A' && fname[i] <= 'Z') || (fname[i] == ' ')))
        {
            printf("\nName should contain letters only\n\n");
            main();
        }
    }

    x = strlen(lname);
    for (a = 0; a < x; a++)
    {
        if (!((lname[i] >= 'a' && lname[i] <= 'z') || (lname[i] >= 'A' && lname[i] <= 'Z') || (lname[i] == ' ')))
        {
            printf("\nName should contain letters only\n\n");
            main();
        }
    }

    // Set up pin
    setPin();
    //
    int loop = 0;
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

menu:
        printf("\n1: AIRTIME\t\t\t2: WITHDRAWAL\n\n3: TRANSFER\t\t\t4: CHANGE PIN\n\n5: CHECK BALANCE\t\t6: QUIT\n\n");

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
            // printf("\tWithdrawal\n");
            // DO WITHDRAWAL
            withdrawal();
        }
        else if (option == 3)
        {
            // printf("\tTransfer\n");
            // DO TRANSFER
            Transfer();
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
            printf("ARE YOU SURE YOU WANT TO QUIT?1-yes/2-no ");
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
            printf("\n\nSELECT A VALID OPTION");
        }

        int menu;
        printf("PRESS 1 TO PERFORM ANOTHER TRANSACTION OR 0 TO EXIT: ");
        scanf("%d", &menu);
        if (menu == 1)
        {
            // loop = 0;
        mypin:
            printf("\nENTER YOUR PIN: ");
            scanf("%s", mypin);
            // at least 4 characters can also be done
            // Another area to check
            if (strcmp(setpin, mypin) != 0)
            {
                printf("Wrong pin!");
                goto mypin;
            }

            if ((mypin[i] >= 'a' && mypin[i] <= 'z') || (mypin[i] >= 'A' && mypin[i] <= 'Z') || (atoi(mypin) < 1000 || atoi(mypin) > 9999))
            {
                printf("Pin must contain 4 digits\n");
                goto mypin;
            }
            goto menu;
        }
        else
        {
        exit:
            printf("THANK YOU FOR BANKING WITH US!\n");
            loop = -1;
        }
    }
    loop++;

    return 0;
}