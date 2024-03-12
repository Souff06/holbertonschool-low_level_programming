#include "main.h"
/**
 * str_concat - chaine de caract conc en alloue de la memoire
 * @s1: prmiere chaine de caract
 * @s2: deuxieme chaine de caract
 * Return: la chaine de caract concat
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, c, d;
	char *a;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != 0; i++)
		;
	for (j = 0; s2[j] != 0; j++)
		;
	a = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
			a[c] = s1[c];
		else
			a[c] = s2[d++];
	}

	return (a);
}
