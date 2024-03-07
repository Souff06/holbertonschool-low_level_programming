#include "main.h"
/**
 * _memcpy -   function copies n bytes from memory src to memory dest .
 * @src: string qui va se faire copier
 * @dest: string qui copy
 * @n: les bytes changer
 * Return: string dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		src[i] = dest[i];
	return (dest);
}
