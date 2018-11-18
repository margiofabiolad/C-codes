#include <stdio.h>
#include <stdlib.h>

int main()
{
    int MyNumberArray [3] [3]  = {
                    {1,2,3}, // row 0
                    {4,5,6}, //row 1
                    {7,8,9} // row 2
    };


    for (int i=0; i<3; i++) { // i<3 because are three rows

        for (int j=0; j<3; j++) {// j<3 because are three columns

        printf("MyNumberArray [%d] [%d]=%d \n",i,j,MyNumberArray[i][j]);
        }
    }
}
