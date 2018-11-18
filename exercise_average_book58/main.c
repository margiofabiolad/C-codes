#include <stdio.h>
#include <stdlib.h>


int main()
{
    /*inialization phae */
    int counter, grade, total;

    float average;

    counter = 1; // why here the counter is initialized in 1 and not in 0?
    total= 0;

    /*processing phase*/
    while (counter <= 10)
    {
       printf("Please enter grade");
       scanf("%d", &grade);

    total = total + grade;
    counter = counter + 1;
    }
    /* termination phase */
    average = total/10.00;
    printf("Average is = %.2f \n", average);

    return 0; /* indicate program ended successfully */

}
