#include <stdio.h>
/** withdrawl - this performs the withdrawal
*
**/

extern float Balance;

void withdrawal(void)
{
    float withdrawAmount;
    int withdrawChoice, i;
    withdraw:
    printf("\nSELECT AMOUNT\n");
    char withdrawType[7][30] = {"1,000", "2,000", "5,000", "10,000", "20,000", "Others", "Exit"};
    for (i = 0; i < 7; i++)
    {
        printf("%d. %s", i + 1, withdrawType[i]);
        printf("\n");
    }
    printf("\n: ");

    scanf("%d", &withdrawChoice);
    if (withdrawChoice > 7 || withdrawChoice < 1)
    {
        printf("Invalid Selection");
        goto withdraw;
    }
    if (withdrawChoice == 7)
            return;
    
   if (withdrawChoice == 1)
   {
        if (Balance >= 1000)
        {
            Balance -= 1000;
            withdrawAmount = 1000;
        }
        else 
        {
            printf("Insufficient Funds\n");
            return;
        }

   }
   if (withdrawChoice == 2)
   {
     if (Balance >= 2000)
        {
            Balance -= 2000;
            withdrawAmount = 2000;
        }
        else 
        {
            printf("Insufficient Funds\n");
            return;
        }
   }
   if (withdrawChoice == 3)
   {
      if (Balance >= 5000)
        {
            Balance -= 5000;
            withdrawAmount = 5000;
        }
        else 
        {
            printf("Insufficient Funds\n");
            return;
        }
   }
   if (withdrawChoice == 4)
   {
        if (Balance >= 10000)
        {
            Balance-= 10000;
            withdrawAmount = 10000;
        }
        else 
        {
            printf("Insufficient Funds\n");
            return;
        }
   }
   if (withdrawChoice == 5)
   {
       if (Balance >= 20000)
        {
            Balance -= 20000;
            withdrawAmount = 20000;
        }
        else 
        {
            printf("Insufficient Funds\n");
            return;
        }
   }
    if (withdrawChoice == 6)
    {
        printf("ENTER AMOUNT\n");
        printf(": ");
        scanf("%f", &withdrawAmount);
        if (Balance >= withdrawAmount)
        {
            Balance -= withdrawAmount;
        }
        else 
        {
            printf("Insufficient Funds\n");
            return;
        }
    }
    printf("You have successfully withdrawn %.2f\n", withdrawAmount);
    return;
}

