#include <stdio.h>

main()
{
	int numero;
	int *punt; // para acceder al valor de numero usamos *punt. *punt nos permite acceder al valor al que apunta punt.
	// Cuando un puntero tiene la dirección de una variable se dice que ese puntero apunta a esa variable

	numero = 43;  // value of the numero
	punt = &numero; // assign a address to variable punt

	printf( "Dirección de numero = %p, valor de numero = %i\n",
		punt, *punt );
}
