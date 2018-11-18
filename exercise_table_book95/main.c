#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 1, N1 =10, N2;


    printf("N \n");

    printf("\t N*10 \t");

    printf("N*100 \n");



    while (N <= 10)
    {


    printf("%d \t", N);
    N1 = 10*N;

    printf("%d \n", N1);
    N = N + 1;


    }

     return 0;
}
