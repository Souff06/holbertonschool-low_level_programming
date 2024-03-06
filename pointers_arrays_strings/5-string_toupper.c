#include "main.h"
/**
 * string_toupper - transformer les lettres minis en majus dans un string
 * @str: string
 * Return: on renvoie la chaine de carac(str)
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
