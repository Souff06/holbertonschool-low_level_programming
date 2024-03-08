#include "main.h"
/**
 * factorial - factorial de 3! = 3*2*1
 * @n: nombre
 * Return: le resultat
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
