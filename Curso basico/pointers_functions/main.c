#include <stdio.h>
#include <stdlib.h>

/// I dont understand whta do the program

void getValue(int *my_pointer)
{
    *my_pointer = 10000; /// &get_the_value = 10000
    return;
}


int main()
{
    int get_the_value;
    getValue(&get_the_value); //

    printf("the value of get_the_value = %d \nu", get_the_value);  // why printf give a value and not the address?

}
