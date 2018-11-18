#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2, b=4;
    int sum, res, mult;
    float div, mod;
    sum= a+b;
    res=a-b;
    div =b/a;
    mult=a*b;
    mod =b % a;
    printf("Sum, res, div and mult, mod is %d %d %f %d %f",sum,res,div,mult, mod);
    return 0;
}
