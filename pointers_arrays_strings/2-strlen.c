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
