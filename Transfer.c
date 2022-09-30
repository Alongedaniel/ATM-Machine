#include <stdio.h>
#include <string.h>
/**
 *
 */

 void Transfer(void)
 {
     int Balance = 50000; /** How to get this to the main function*/

    printf("TRANSFER\n");
    int proceed, i, BankChoice, perform;

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
    char BankName[6][30] ={"1. Sterling", "2. UBA", "3. First Bank", "4. Access Bank", "5. Heritage Bank", "6. GT Bank"}; 
    for (i = 0; i < 6; i++)
    {
        printf("%s", BankName[i]);
        printf("\n");
    }
    printf("\n: ");

    
    scanf("%d", &BankChoice);
    
    /**char AccNo[10];
    printf("\nEnter Recipient's Account No\n:  ");
    scanf("%s", AccNo);
    // int AccNolength = strlen(AccNo); 
    int AccNolength = sizeof(AccNo) / sizeof(char); 
    printf("%d", AccNolength);
    **/
   
   /** while (AccNolength != 10)
    {
        printf("\nInvlaid Account Number\n\nEnter Recipient's Account No\n:  ");
        scanf("%s", AccNo);
    }**/
    int TransferAmount;
    printf("\nEnter Amount to Transfer\n: ");
    scanf("%d", &TransferAmount);

    int confirm;

    printf("\nConfirm Transfer \n1. Yes \n2. No\n: ");
    scanf("%d", &confirm);
    if (confirm == 1)
    {
        Balance -= TransferAmount;
        printf("\nTransfer Successful!\n");


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
      printf("\nDo you want to Perform another transfer\n1 to perform another transfer\n2 to exit\n: ");
      return (0);
 }