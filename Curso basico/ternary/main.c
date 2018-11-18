#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=25, b=20;
int c;

/// (/* Logical expression goes here /*) ? (/* if non-zero (true) */) : (/* if 0 (false) */)
c = (a>b) ? b : a;
    printf("ans = %d",c);

}
