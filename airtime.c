#include <stdio.h>
#include <string.h>

float Airtime(float bal)
{
    char carrier[4][9] = {"MTN", "Airtel", "Glo", "9Mobile"};
    int i,j;

    printf("Select Mobile Network Carrier\n");
    for (i = 0; i < 4; i++)
    {
        printf("Press %d for ", i+1);
        puts(carrier[i]);
    }
    printf(": ");
    scanf("%d", &j);

    int k = j;
    while(k < 0 || k >4)
    {
        printf ("\nSelect valid option:\n");
        for (i = 0; i < 4; i++)
        {
            printf("Press %d for ", i+1);
            puts(carrier[i]);
        }
        printf(": ");
        scanf("%d", &k);
    }

    unsigned int l;
    printf("\nDo not include first 0.\nRecipient mobile number: ");
    scanf("%d", &l);

    int count = 0;
    do {
        l /= 10;
        ++count;
    }while (l != 0);

    while (count < 10 || count > 10)
    {
        printf("Enter valid Recipient mobile number.\nRecipient mobile number: ");
        scanf("%d", &l);
        printf("%d", l);

        int count = 0;
        while (l!=0)
        {
           count++;
           l /= 10;
        }
        printf("%d", count);
        if (count == 10 )
            break;
    }

    float balance = bal;
    float credit;
    printf("\nHow much do you want to recharge: ");
    scanf("%f", &credit);

    while (credit > balance)
    {
        printf("Insufficient Funds.\n Account balance %f.", balance);
        printf("\nRecharge amount: ");
        scanf("%f", &credit);
    }

    printf("Recharge Successful.\nAccount balance: %f.", (balance-credit));

    return(balance);
}

int main()
{
    float n = 12000;
    Airtime(n);
    return(0);
}

