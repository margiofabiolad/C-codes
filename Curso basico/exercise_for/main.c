#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j;
   int table = 10;
   int max = 12;

   for (i=1 ; i <= table ; i++) // reads the variable, check the condition and continue with the next for?
   {    for (j=0 ; j <= max ; j++) {
   /*reads the variable, check the condition, print i,j, sum 1 (j++) and continue until the condition will be break, there
   return to 'for i', sum 1 , check the condition and jump to 'for j' and so on...
   */
           printf("%d x %d = %d \n", i,j, i*j);
        }
        printf("\n");
   }

   return 0;

}
