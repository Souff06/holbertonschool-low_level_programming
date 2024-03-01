#include "main.h"
/**
 * swap_int - permute les valeurs de deux entiers.
 * @a: variable 1
 * @b: variable 2
*/

void swap_int(int *a, int *b)
{
	int nombreTempo0 = 0;

	nombreTempo0 = *b;
	*b = *a;
	*a = nombreTempo0;
}
