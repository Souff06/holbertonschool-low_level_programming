#include "main.h"
/**
 * _pow_recursion - faire des puissance
 * @x: nmb
 * @y: la puissance du nmb
 * Return: le resultat
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
