#include <stdio.h>
#include <stdlib.h>

int main()
{
  int lambda = 3, lambda2 = 5, lambda3 = 7, lambda4 = 9;

  printf("\t lambda \t");

  printf("lambda + 2 \t");

  printf("lambda + 4 \t");

  printf("lambda + 6 \n \n");

  while (lambda <=15)

  {
    printf("\t %d \t", lambda);
    lambda = lambda + 3;

    printf("\t %d \t", lambda2);
    lambda2 = lambda + 2;

    printf("\t %d \t", lambda3);
    lambda3 = lambda + 4;

    printf("\t %d \n", lambda4);
    lambda4 = lambda + 6;

  }

    return 0;
}
