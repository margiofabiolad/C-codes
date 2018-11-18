#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gallons, milles, gallons_milles, average, total=0;
    int counter = 0;

    while (milles != -1){
        while (gallons != -1)
{
            printf("Please enter milles driven: \n");
            scanf("%f", &milles);

            printf("Please enter gallons used (-1 to end): \n");
            scanf("%f", &gallons);

            if (milles != -1 || gallons != -1)

            {
                gallons_milles = (float) milles/gallons;

                printf("The gallons/milles is: %f \n",gallons_milles);

        total = gallons_milles + total;
        counter = counter + 1;
            }
} }
    if (counter != 0)
{
    average = (float) total/counter;
    printf("Average is equal to: %f \n", average);

    return 0;
    }
}
