#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - check the code.
 * @c: sdbckj
 * Return: 1 quand c majusc sinon 0.
 */

int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
