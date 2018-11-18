#include <stdio.h>
#include <stdlib.h>

int main()
// [6] means that the array has six values or elements
{
    int MyNumberArray[6] = {1,2,3,4,5,6};

    int accessArray = MyNumberArray[1]; // to print a specific element

    MyNumberArray[1]= 7; // when I want to change a value for another un the same position

    printf("value = %d, \n", accessArray); // why print the original value (2) and not (7)?Ķ

    char charArray [4] ={'a','b','c','d'};

    // if I want to print all th values of the array I use a for

    for (int i=0; i<6; i++)
    {
        printf("element [%d] = %d \n",i, MyNumberArray[i]); // why to writter MyNumberArray[i] and not accessArray?
    }
}
