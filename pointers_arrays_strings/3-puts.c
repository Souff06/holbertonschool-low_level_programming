#include "main.h"
/**
 * _puts - utilisée pour imprimer une chaîne de caractères suivie\n
 * @str: la chaine de caractere
*/

void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
