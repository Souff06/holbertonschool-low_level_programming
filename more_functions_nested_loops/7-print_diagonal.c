#include "main.h"
/**
 * print_diagonal - faire une diagonale avec \avec a (ordonnee) et b (abscisse)
 * @n: nombre de fois on mets diag
*/
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			if (a == b)
			{
				_putchar('\\');
				_putchar('\n');
			}
			if (a > b)
			{
				_putchar(' ');
			}
		}
	}
}
