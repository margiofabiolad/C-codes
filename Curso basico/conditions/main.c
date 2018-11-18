#include <stdio.h>
#include <stdlib.h>

int main()
{
int age;
  
printf("Please enter the age: ");
scanf("%d", &age);
  
if (age > 18)  {
  printf("Age is greater than 18");
}
if (age == 18) {
  printf("Age is equal to 18");
}
if (age < 18) {
  printf("Age is less than 18");
}
}
