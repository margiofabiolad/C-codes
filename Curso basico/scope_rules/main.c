#include <stdio.h>
#include <stdlib.h>

/// local variable has preference in the moment of print. You can't use a same variable (name) in two different functions
/// e.g., to define a variable A in function void, and print A in other function (int main for this case).

int global_v; /// g is a Global variable is out of a function and is started in zero
// int global_v=25;

void NumberPrint() {
   /// here goes a local variable because we are inside a function
    }
int main()
{
    int local_v; /// a local variable is inside a function and is started in any value
    //int global_v=20;
    printf("local variable = %d \n", local_v);
    printf("global variable =  %d \n", global_v);
    NumberPrint();

}
