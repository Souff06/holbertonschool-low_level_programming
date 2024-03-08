#include "main.h"
/**
 * main - argc/argv
 * @argc: le count
 * @argv: le nom de l'argu
 * Return: result
*/
int main(int argc, char *argv[])
{
	int i;

	(void)argc;

	for (i = 0; argv[i] != 0; i++)
		printf("%s\n", argv[i]);
	return (0);
}
