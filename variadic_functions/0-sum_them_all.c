#include "variadic_functions.h"
/**
 * sum_them_all - addition all
 * @n: le nombre a ajouter
 * Return: le resultat de la somme
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
