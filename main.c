#include <stdio.h>
#include "main.h"

int main() {
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
    char fname, lname;
    scanf("%s %s", &fname, &lname);

    int loop = 0;



    while (loop >= 0)
    {
    /**
     * REquest pin
     */

        printf("\nEnter your pin: ");
    int pin;
    scanf("%d", &pin);

    
    printf("\n\tWelcome to ATM\n");

    /**
     * ATM options
     */

    printf("\n1: Airtime\t\t\t2: Withdrawal\n\n3: Transfer\t\t4: Change Pin\n\n5: Check Balance\t\t6: Quit\n\n");

    printf("Select option: ");
    scanf("%d", &option);
    if (option == 1) {
        printf("\tAirtime\n");
        // DO AIRTIME
    }
    else if (option == 2) {
        printf("\tWithdrawal\n");
        // DO WITHDRAWAL
    }
    else if (option == 3) {
        printf("\tTransfer\n");
        // DO TRANSFER
    }
    else if (option == 4) {
        printf("\tChange Pin\n");
        // DO CHANGE PIN
    }
    else if (option == 5) {
        printf("\tCheck Balane\n");
        // DO CHECK Balance
    }
    else if (option == 6) {
        printf("Are you sure you want to end?1-yes/2-no ");
        int end;
        scanf("%d", &end);
        if (end == 1) {
        loop = -1;
        }
        else if (end == 2) {
            loop = 0;
        }
        // else {
        //     printf("\nSelect a valid option: ");
        //     scanf("%d", &end);
        // }
    }
    else{
        printf("\n\nSelect a valid option");
    }
    }
    loop++;
}