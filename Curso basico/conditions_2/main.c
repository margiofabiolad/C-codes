#include <stdio.h>
#include <stdlib.h>

int main()
{
int age;
printf("Please enter the age: ");
scanf("%d", &age);
if (age > 18) {
    printf("Age is greater than 18 \n");
    if (age < 21) {
        printf("Age is greater than 18 but less than 21");
    } else {
        printf("Age is greater than 18 but not less than 21");
    }
}
else if (age == 18) {
    printf("Age is equal to 18");
}

else {
    printf("Age is not greater than or equal to 18");
}
}
