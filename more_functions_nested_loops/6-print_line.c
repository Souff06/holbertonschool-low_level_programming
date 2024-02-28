#include "main.h"
/**
 * print_line - faire une ligne avec des traits bas _
 * @n: combien de fois se repete le _
*/
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}
