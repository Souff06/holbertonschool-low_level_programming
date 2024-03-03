#include <stdio.h>
/**
 * main - les alphabet a l'envers
 * Return: intb donc tout le temps un return
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
