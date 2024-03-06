#include "main.h"
/**
 * cap_string - j'ai mis du temps zebi
 * @str: string
 * Return: on renvoie la chaine de carac(str)
 */

char *cap_string(char *str)
{
	int c, i;
	int sep[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	for (c = 0; str[c] != '\0'; c++)
	{
		for (i = 0; sep[i] != '\0'; i++)
		{
			if (str[c] == sep[i])
			{
				if (sep[i] == 10 && c == 0)
					printf("\n");
				else if (sep[i] == 9)
					str[c] = ' ';
			}
			else if (str[c] > 96 && str[c] < 123 && str[c - 1] == sep[i])
				str[c] -= 32;
		}
	}
	return (str);
}
