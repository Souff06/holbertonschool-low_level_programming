#include "main.h"
/**
 * _strlen_recursion - print the number of carac of th s
 * @s: la chaine de caractere
 * Return: retourner le nombre de carac
*/

int _strlen_recursion(char *s)
{
	int cmb = 0;

	while (*s != 0)
	{
		cmb++;
		s++;
	}
	return (cmb);
}
