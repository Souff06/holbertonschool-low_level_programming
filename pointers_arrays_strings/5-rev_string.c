#include "main.h"
/**
 * rev_string - inverser la chaine de carac
 * @s: la chaine de carac
*/

void rev_string(char *s)
{
	int longueC = 0;
	int i;
	int j;
	char tempo;

	while (s[longueC] != '\0')
		longueC++;

	for (i = 0, j = longueC - 1; i < j; i++, j--)
	{
		tempo = s[i];
		s[i] = s[j];
		s[j] = tempo;
	}
}
