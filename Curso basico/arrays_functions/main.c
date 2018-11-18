#include <stdio.h>
#include <stdlib.h>

// void ArraySum (int MyArray[6]) //here  the sum only can doing for six elements and not for any size o number of elements

int ArraySum (int MyArray[], int size) // this is the function declared
{
    int sum=0;

    for (int i=0 ; i < size; i++) {

    /// sum = sum + MyArray[i];   large way for the to writter the sum
    sum += MyArray[i];
     }

    return sum;



}

int main()
{
    int MyNumberArray [6] = {1,2,3,4,5,6};

    int Sum_of_Array = ArraySum(MyNumberArray,6); /* it is to use the function declared in the five line but with the arguments
                                                  of the main program: MyNumberArray(int MyArray) and 6(size) *pri*/
    printf("the array sum = %d \n",Sum_of_Array);

}
