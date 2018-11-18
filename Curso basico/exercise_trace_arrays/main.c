#include <stdio.h>
#include <stdlib.h>

int x,y=3;

int ArrayTrace (int MyArray [x][y], int x, int y) // this is the function declared
{

    int trace = 0;


    for (int i=0; i < x; i++) {

        for (int j=0; j < y; j++) {


        if (i == j) {

        trace = trace + MyArray[i][j];

        }
        }
    }
   return trace;
}


int main()
{


    int MyTrace [3][3] =   {
                         {1,2,3},
                         {4,5,6},
                         {7,8,9}
                         };

    int Trace_of_Array = ArrayTrace(MyTrace,3,3); /* it is to use the function declared in the five line but with the arguments
                                                  of the main program: MyNumberArray(int MyArray) and 6(size) *pri*/
    printf("the trace array = %i \n", Trace_of_Array);
}
