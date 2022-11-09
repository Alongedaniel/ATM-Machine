#include <stdio.h>

extern float Balance;

void Check_balance(){
    printf("\t======== BALANCE ========\n");
    printf("Your balance is: %.2f\n", Balance);
}