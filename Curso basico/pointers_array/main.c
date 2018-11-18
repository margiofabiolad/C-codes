#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val_array[3] = {30, 40, 50};
    int *pointer_array[3];

    for (int i = 0; i < 3; i++)
        {

        pointer_array[i]= &val_array[i]; /// assing the address of array elements


        }

    for (int i = 0; i < 3; i++) /// I don't understand the function of the for here
    {
        printf("value of val_array[%d] = %d \n", i, *pointer_array[i]);
    }
}
