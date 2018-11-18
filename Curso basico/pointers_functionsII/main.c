#include <stdio.h>
#include <stdlib.h>

// I dont understand the importance of *array_val.
// I dont see the role that play the asterisk
// the program looks like a normal function without the pointer

    int getSum(int *array_val, int size)
    {
        int sum=0;

        for (int i=0; i< size; i++)
        {
            sum += array_val[i];

        }
    return sum;
    }

int main()
{

    int my_array[4] = {10,20,30,40};
    int mySum = getSum(my_array,4);

    printf("value of my sum = %d", mySum);

}
