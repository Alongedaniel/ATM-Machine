#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float Airtime(float bal)
{
    char carrier[4][9] = {"MTN", "Airtel", "Glo", "9Mobile"};
    int i, j, proceed, perform;

    printf("\nPURCHASE AIRTIME\n\n");
    printf("Press 1 to Proceed\nPress 0 to Exit\n\n: ");
    scanf("%d", &proceed);

    if (proceed == 1)
    {
        ;
    }
    else if (proceed == 0)
    {
        exit(2);
    }

    printf("\nSELECT MOBILE NETWORK CARRIER\n\n");
    for (i = 0; i < 4; i++)
    {
        printf("Press %d for ", i+1);
        puts(carrier[i]);
    }
    printf("\n: ");
    scanf("%d", &j);

    int k = j;
    while(k < 0 || k >4)
    {
        printf ("\nSelect valid option:\n\n");
        for (i = 0; i < 4; i++)
        {
            printf("Press %d for ", i+1);
            puts(carrier[i]);
        }
        printf("\n: ");
        scanf("%d", &k);
    }

    /*unsigned int l;
    printf("\nRECIPIENT MOBILE NUMBER: +234");
    scanf("%d", &l);
    printf("%d", l);*/

    char num[13] = {0};
    printf("\nRECIPIENT MOBILE NUMBER\n");
    /*scanf("%13s", num);
    if (strlen(num) != 10)
        {
            printf("\nInvalid mobile number!\n");
        }

    /*int count = 0;
    do {
        l /= 10;
        ++count;
    }while (l != 0);*/


    do{
        printf("\nEnter valid Recipient mobile number.\nRecipient mobile number: +234(0)");
        scanf("%s", &num);

        if (strlen(num) == 10 )
            break;
    }while (strlen(num) != 10);

    float balance = bal;
    float credit;
    printf("\nHOW MUCH DO YOU WANT TO RECHARGE?\n");
    scanf("%f", &credit);

    while (credit > balance)
    {
        printf("\nINSUFFICIENT FUNDS\n\nAccount balance %f.", balance);
        printf("\nRecharge amount: ");
        scanf("%f", &credit);
    }

    int confirm;
    printf("\nCONFIRM AIRTIME PURCHASE\n\nPress 1 to Confirm \nPress 2 to Cancel\n\n: ");
    scanf("%d", &confirm);

    if (confirm == 1)
    {
        balance -= credit;
        printf("\nRECHARGE SUCCESSFUL.\n");
        //printf("%s", num);

        printf("\nYou have successfully recharged %.2f on 0%s, %s.\nAmount to be received shortly.\n\n", credit, num, carrier[k-1] );

        printf("\nDo you want to purchase airtime?\n\nPress 1 to Continue\nPress 2 to Exit\n\n: ");
        scanf("%d", &perform);

        if (perform == 1)
        {
            Airtime(balance);
        }
        else if (perform == 2)
        {
            return;
        }

    }
    else if (confirm == 2);
    {
         printf("Do you want to make new airtime purchase?\n\nPress 1 to Continue\nPress 2 to Exit\n\n: ");
        scanf("%d", &perform);

        if (perform == 1)
        {
            Airtime(bal);
        }
        else if (perform == 2)
        {
            exit(2);
        }
    }
    return(balance);
}

//Additions to make
//press 0 to go back
//go back to homepage
//confirmation if you want to send the amount

/*int main()
{
    float n = 12000;
    Airtime(n);
    return(0);
}*/

