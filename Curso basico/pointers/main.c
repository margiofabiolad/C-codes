#include <stdio.h>
#include <stdlib.h>


/// Pointer is a variable whose value is the address of another variable

int main()
{ /// first i defined a normal variable and after the pointer variable?
   int val=30;

   int *pointer_p; /// is the variable whose value is the address of the &val
   /// what is the different if I use the * or not. This is a pointer variable?
   pointer_p = &val;

   printf("address of the val = %x \n",&val); /// print the address f the val?
   /// why to change d for x? decimal for hexadecimal
   /// hecadecimal allows to writter bigger numbers?
   /// how I know that the value of 'val' is hexadecimal?

   printf("value of the pointer variable = %x \n", pointer_p); /// print the address of the pointer variable

   printf("value of pointer  = %d \n", *pointer_p); /* print only the value of the variable pointer.
                                                        d is because the value is small? */
}
