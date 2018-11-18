#include <stdio.h>
#include <stdlib.h>
#include <string.h> // library for strings


// Structures is a logical group of variables


struct student{

    int id;
    char name[20];
    float percentage;
}; /* before del semicolon I can to define a variable e.g., 'record' and y not necessary the line
'struct student record1', follows it changes the name in all the variables by 'record' */

int main()
{
    struct student record1;
    record1.id = 1;
    strcpy(record1.name, "John");
    record1.percentage = 70.20;

    printf("id = %d            Name = %s        percentage = %f \n",
            record1.id, record1.name, record1.percentage);

            struct student record2;
    record2.id = 2;
    strcpy(record2.name, "Mark");
    record2.percentage = 90.30;

    printf("id = %d            Name = %s        percentage = %f \n",
            record2.id, record2.name, record2.percentage);



}
