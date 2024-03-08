#include "main.h"
/**
 * _puts_recursion - print string foll new line
 * @s: la chaine de caractere
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
