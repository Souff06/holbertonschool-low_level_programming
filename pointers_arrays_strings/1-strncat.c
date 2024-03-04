#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	while (dest[i], dest != '\0')
		i++;

	for (j = 0; j < n && src[j] != 0; j++)
		dest[i + j] = src[j];

	return dest;
}
