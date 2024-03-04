#include"main.h"
/**
 * print_sign - Print the sign of a number
 * @n: The number to check
 *
 * Return: 1 if the number is potitiv and print +
 *		   0 if the number is zero and print 0
 *		   -1 if the number is negativ and print -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
