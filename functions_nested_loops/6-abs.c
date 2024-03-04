#include"main.h"
/**
 * _abs - Print absolute value of a number
 * @n: The number to check
 *
 * Return: n if n is positiv or null
 *        -n if n is negativ
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
