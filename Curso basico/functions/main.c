#include <stdio.h>
#include <stdlib.h>

/* type name (type1 arg 1, type 2, arg 2,...)
{
code
} */

void MyFunctionName()
{
    printf("Sum =%d \n",10+52);
    printf("We are inside a function \n");
}



int main()
{
    MyFunctionName();
    MyFunctionName();
    MyFunctionName();
}

/*void MyFunctionName() // the function can be defined too here
{
    printf("Sum =%d \n",10+52);
    printf("We are inside a function \n");
}*/
