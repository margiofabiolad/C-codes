#include <stdio.h>
#include <stdlib.h>
#include <string.h> // library for strings

int main()
{
    char string1[12] = "Hello "; // what means [12]? amount of characters? but... string1 has 5
    char string2[12] = "Wold";
    char string3[12];

    strcpy(string3,string1); // strcpy(destiny, sorce) the content in string 1 goes to string3
    strcat(string1,string2); // add string2 to string1
    int length_string1 = strlen(string3); // length of the string

    printf("strcpy = %s \n", string3);
    printf("strcat = %s \n", string1);
    printf("strlen = %d \n", length_string1);



    return 0;
}
