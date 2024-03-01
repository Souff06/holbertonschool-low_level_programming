#include "main.h"
/**
 * _strcpy - copies the string
 * @dest: destination du point
 * @src: source du point
 * Return: dest le pointeur
*/

char *_strcpy(char *dest, char *src)
{
	int t;

	for (t = 0;  src[t] != '\0'; t++)
		dest[t] = src[t];

	return (dest);
}
