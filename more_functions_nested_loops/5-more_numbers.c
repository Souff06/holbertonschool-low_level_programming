#include "main.h"
/**
* more_numbers - print 0 to 14 10 fois
*/

void more_numbers(void)
{
	int c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');

		}
		_putchar('\n');
	}
}
