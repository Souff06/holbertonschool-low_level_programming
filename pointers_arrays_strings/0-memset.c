#include "main.h"
/**
 * _memset - remplir un bloc de memoire
 * @s: pointeur
 * @b: l'octet constant
 * @n: les n premiers octets de la zone mémoire pointée par s
 * Return: return 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
