#include <stdio.h>
#include <stdlib.h>

int main()
    {

    float sales, salary;

    while (sales != -1)
    {
        printf("Enter sales in dollars: \n ");
        scanf("%f", &sales);

        if (sales == -1)
        {break;}

        salary = (float) sales*(0.090) + 200;

        printf("Salary is: %f \n", salary);
    }

    return 0;
}
