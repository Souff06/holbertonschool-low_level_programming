#include "main.h"
/**
 * leet - j'ai mis du temps zebi
 * @s: string
 * Return: on renvoie la chaine de carac(str)
 */

char *leet(char *s)
{
	int i, j;
	char sub[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == sub[j][0] || s[i] == sub[j][1])
			{
				s[i] = (j + 1) + '0';
				break;
			}
		}
	}
	return (s);
}
