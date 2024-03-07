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
	unsigned int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			src[i + j] = dest[j];
	}
	return (dest);
}
