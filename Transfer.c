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
    int proceed, i, j, BankChoice, perform;

    printf("Enter 1 to proceed\nOr 0 to exit\n: ");
    scanf("%d", &proceed);

    if (proceed == 1)
    {
        ;
    }
    else if (proceed == 0)
    {
        return;
    }
Bank:
    printf("\nSelect your Recipient's Bank\n");
    char BankName[6][30] = {"Sterling", "UBA", "First Bank", "Access Bank", "Heritage Bank", "GT Bank"};
    for (i = 0; i < 6; i++)
    {
        printf("%d. %s", i + 1, BankName[i]);
        printf("\n");
    }
    printf("\n: ");

    scanf("%d", &BankChoice);
    if (BankChoice > 6 || BankChoice < 1)
    {
        printf("Invalid Selection");
        goto Bank;
    }

    /** Using the strlen fun to test acc no validity*/

    char AccNo[13] = {0};
    do
    {
        printf("\nEnter Recipient's Account No\n:  ");
        scanf("%13s", AccNo);
        if (strlen(AccNo) != 10)
        {
            printf("\nInvlaid Account Number!\n\n");
        }
    } while (strlen(AccNo) != 10);

    float TransferAmount;

    printf("\nEnter Amount to Transfer\n: ");
    scanf("%f", &TransferAmount);

    if (TransferAmount > Balance)
    {
        printf("Insufficient Funds\nYour Balance is %.2f\n", Balance);
        goto Perform;
    }
    int confirm;

    printf("\nConfirm Transfer \n1. Yes \n2. No\n: ");
    scanf("%d", &confirm);
    if (confirm == 1)
    {
        /* The global var Balance is in use here to get the value of the balance after transfer confirmation */
        Balance -= TransferAmount;
        printf("\nTransfer Successful!\n");
        printf("You have successfully transferrred %.2f to %s, %s\n\n", TransferAmount, AccNo, BankName[BankChoice - 1]);

    Perform:
        printf("Enter 1 to perform another transfer or 2 to exit\n: ");
        scanf("%d", &perform);

        if (perform == 1)
        {
            Transfer();
        }
        else if (perform == 2)
        {
            return;
        }
    }
    else if (confirm == 2)
        ;
    {
        printf("\nDo you want to Perform another transfer\n1 to perform another transfer\n2 to exit\n: ");
        scanf("%d", &perform);

        if (perform == 1)
        {
            Transfer();
        }
        else if (perform == 2)
        {
            return;
        }
    }
}
