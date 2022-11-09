#include <stdio.h>
#include <string.h>
/**
 * Transfer - Perfroms all transfers for the user
 * Return: Always 0
 */
extern float Balance;

void Transfer(void)
{

    printf("TRANSFER\n");
    int i, j, BankChoice;

Bank:
    printf("\nSELECT RECIPIENT'S BANK\n");
    char BankName[7][30] = {"Sterling", "UBA", "First Bank", "Access Bank", "Heritage Bank", "GT Bank", "Exit"};
    for (i = 0; i < 7; i++)
    {
        printf("%d. %s", i + 1, BankName[i]);
        printf("\n");
    }
    printf("\n: ");

    scanf("%d", &BankChoice);
    if (BankChoice > 7 || BankChoice < 1)
    {
        printf("Invalid Selection");
        goto Bank;
    }
    if (BankChoice == 7)
            return;

    /** Using the strlen fun to test acc no validity*/

    char AccNo[13] = {0};

    do
    {
        printf("\nENTER RECIPIENT'S ACCOUNT NO\n:  ");
        scanf("%13s", AccNo);
        if (strlen(AccNo) != 10)
        {
            printf("\nInvalid Account Number!\n\n");
        }
    } while (strlen(AccNo) != 10);

    float TransferAmount;

    printf("\nENTER AMOUNT TO TRANSFER\n: ");
    scanf("%f", &TransferAmount);

    if (TransferAmount > Balance)
    {
        printf("Insufficient Funds\nYour Balance is %.2f\n", Balance);
        return;
    }
    int confirm;

    printf("\nCONFIRM TRANSFER\n1. Yes \n2. No\n: ");
    scanf("%d", &confirm);
    if (confirm == 1)
    {
        /* The global var Balance is in use here to get the value of the balance after transfer confirmation */
        Balance -= TransferAmount;
        printf("\nTRANSFER SUCCESSFUL!\n");
        printf("You have successfully transferrred %.2f to %s, %s\n\n", TransferAmount, AccNo, BankName[BankChoice - 1]);
     }
    else if (confirm == 2)
            return;
}
