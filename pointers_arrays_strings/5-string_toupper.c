#include "main.h"
/**
 * string_toupper - transformer les lettres minis en majus dans un string
 * @str: string
 * Return: on renvoie la chaine de carac(str)
 */

char *string_toupper(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (islower(str[c]))
			str[c] = toupper(str[c]);
	}
	return (str);
}
