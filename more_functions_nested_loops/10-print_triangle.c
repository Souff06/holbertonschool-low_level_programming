#include "main.h"
/**
 * print_triangle - cree un triangle avec des #
 * @size: taille du triangle.
*/
void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');
	for (b = 1; b <= size; b++)
	{
		for (a = 1; a <= size; a++)
		{
			if (a + b <= size)
				_putchar(' ');
			if (a + b > size)
				_putchar('#');
		}
	_putchar('\n');
	}
}
