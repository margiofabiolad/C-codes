#include <stdio.h>
#include <stdlib.h>
int main() {  /* definition of the variables */
   int account;
   float balance, charges, credits, limit, new_balance;

   while (account != -1)
{
        printf("Enter account number (-1 to end) : \n ");
        scanf("%d", &account);

        if (account == -1){
        break;}

        printf("Enter begging balance: \n ");
        scanf("%f", &balance);

        printf("Enter total charges: \n ");
        scanf("%f", &charges);

        printf("Enter total credits: \n ",credits);
        scanf("%f", &credits);

        printf("Enter limit credit: \n ");
        scanf("%f", &limit);

    new_balance = (float) balance + charges - credits;

        if (new_balance > limit){

            printf("account number is: %d \n ", account);
            printf("limit of credit is: %f \n ", limit);
            printf("the new balance is: %f \n", new_balance);
            printf("Credit limite exceeded!!! \n");

                                      } } return 0; }
