#include <stdio.h>
#include <stdlib.h>



void Sum(int a, int b) // void no return any value?
{
    int sum =a+b;
    printf("Sum = %d \n", sum);
}
int main()
{
  /* Sum(50,60);
  Sum(500,600);
  Sum(111,222);
  Sum(1234,5678); */
  int x,y;
  printf("Please enter two numbers: \n");
  printf("Number1 \n");
  scanf("%d", &x);

  printf("Number2 \n");
  scanf("%d", &y);

  Sum(x,y);
}
