#include "main.h"
/**
 * _strlen_recursion - print the number of carac of th s
 * @s: la chaine de caractere
 * Return: retourner le nombre de carac
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
