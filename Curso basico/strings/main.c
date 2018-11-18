#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Library for strings

int main()
{

 char my_string[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; // What means '\0' ?
 /* \0 not has a special means, simply when the program find out one it stop to print the string  */

 char my_other_string[6] = "Hello";

 printf("my string value is %s \n", my_string);

 printf("my other string value is %s", my_other_string);


    return 0;
}
