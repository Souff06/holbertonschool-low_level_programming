#include "main.h"
/**
 * print_rev - imprimer a l'envers
 * @s: la chaine de caracteres
*/

void print_rev(char *s)
{
	int i = 0;
	int j;

	for (; s[i] != '\0';)
		i++;
	for (j = i-1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
