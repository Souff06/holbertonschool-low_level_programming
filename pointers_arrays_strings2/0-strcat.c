#include "main.h"
/**
 * _strcat -  function that concatenates two strings.
 * @src: chaine de caractere a ajouter
 * @dest: la chaine de carac qui va se faire ecraser son null
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != 0)
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
