#include <stdio.h>
#include <stdlib.h>



int Product(int a, int b)
{
  return (a *  b); // I don't understand the "return" here
}
int main()
{

  int x,y;
  printf("Please enter two numbers: \n");
  printf("Number1 \n");
  scanf("%d", &x);

  printf("Number2 \n");
  scanf("%d", &y);

 int prod;
 prod = Product(x,y);

 printf("Product = %d",prod);
}
