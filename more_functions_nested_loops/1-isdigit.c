#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - check the code.
 * @c: charactere
 * Return: 1 quand c un chiffre (0-9) sinon 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
