#include <stdio.h>
#include <stdlib.h>

 /* Estructuras de control anidadas: analysis of examination results */


int main()
{
  /* initializing variables in declarations */

  int passes = 0, failures = 0, student = 1, result;

  /* process 10 students; counter-controlled loop */

  while (student <= 10)
  {
    printf("Enter result (1=pass, 2=fail): ");
    scanf("%d", &result);

    if (result == 1)
        passes = passes + 1;

    else
        failures = failures + 1;

    student = student + 1;
  }

  printf("Passed %d \n", passes);
  printf("Failed %d \n", failures);

  if (passes > 8)
  {
    printf("Raise tuition! \n");
  }
  else

    printf("Sorry");

  return 0; /*successful termination */

}
