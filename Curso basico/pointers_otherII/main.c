
#include <stdio.h>

main()
{
	int a, b;
	int *punt1, *punt2;

	a = 5; b = 5;
	punt1 = &a; punt2 = &b;

	if ( *punt1 == *punt2 )
	printf( "Son iguales\n" );


	/* other option is to compare if the address are equal (obviouly not), only are equal the value of the two variables.
	Thus:
	if (punt1 != punt2)
	printf("are differents \n")

	*/
}
