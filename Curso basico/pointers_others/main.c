#include <stdio.h>

int suma( int *a, int b )
{
	int c;

	c = *a + b;
	*a = 0;

	return c;
}

main()
{
	int var1, var2;

	var1 = 5; var2 = 8;

	printf( "La suma es: %i y a vale: %i\n", suma(&var1, var2), var1 );
}
