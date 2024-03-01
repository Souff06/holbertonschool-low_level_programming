#include "main.h"
/**
 * print_array - affiche la 2eme moitie de la chain carac
 * @a: la chaine de carac
 * @n: nombre des elements
 */

void print_array(int *a, int n)
{
	int h;

	for (h = 0; h < n; h++)
	{
		if (h == n - 1)
		{
			printf("%d", a[h]);
		}
		else
			printf("%d, ", a[h]);
	}
	printf("\n");
}
