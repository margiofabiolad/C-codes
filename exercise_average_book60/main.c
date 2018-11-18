#include <stdio.h>
#include <stdlib.h>
/* class average program with sentinel-controlled-repetition */

int main()
{
  float average;
  int counter, grade, total;

  total = 0;
  counter = 0; // why in 0 and not in 1?

  printf("Enter grade, -1 to end: ");
  scanf("%d", &grade);

  while (grade != -1)
  {
    total = total + grade;
    counter = counter + 1;

    printf("Enter grade, -1 to end:");
    scanf("%d", &grade);
  }

  if (counter != 0)
  {
    average = (float) total/counter; /* (float) represents a operator that allow print the variable considering the decimal
    part of the result  */
    printf("Class average is %.2f \n", average);
  }
  else
    printf("no grades were entered \n");

    return 0;
}
