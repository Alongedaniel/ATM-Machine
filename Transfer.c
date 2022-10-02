#include <stdio.h>
#include <string.h>
/**
 *
 */
 float Balance = 50000; /* Global variable for balance */

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

    printf("\nSelect your Recipient's Bank\n");
    char BankName[6][30] ={"Sterling", "UBA", "First Bank", "Access Bank", "Heritage Bank", "GT Bank"}; 
    for (i = 0; i < 6; i++)
    {
        printf("%d. %s", i + 1, BankName[i]);
        printf("\n");
    }
    printf("\n: ");

    
    scanf("%d", &BankChoice);
    
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

    int confirm;

    printf("\nConfirm Transfer \n1. Yes \n2. No\n: ");
    scanf("%d", &confirm);
    if (confirm == 1)
    {
        /* The global var Balance is in use here to get the value of the balance after transfer confirmation */
        Balance -= TransferAmount; 
        printf("\nTransfer Successful!\n");
        printf("You have successfully transferrred %.2f to %s, %s\n\n", TransferAmount, AccNo,BankName[BankChoice - 1] );
    


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
    else if (confirm == 2);
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

 int main(void)
 {
     /**
      * main - Calls other functions
      */

      Transfer();
      /* This is just to show the balance after the transfer that was made */
      printf("Your Balance is %.2f", Balance);
      return (0);
 }