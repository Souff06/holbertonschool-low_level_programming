#include "main.h"
/**
 * _strlen - affiche le nombre de caractere
 * @s: compte le nombre dans i
 * Return: le nombre de caracteres
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * puts_half - affiche la 2eme moitie de la chain carac
 * @str: la chaine de carac
 */

void puts_half(char *str)
{
	int longCh = _strlen(str);

	if (longCh % 2 != 0)
	{
		longCh++;
	}
	for (longCh = longCh / 2; str[longCh] != '\0'; longCh++)
	{
		_putchar(str[longCh]);
	}
	_putchar('\n');
}
