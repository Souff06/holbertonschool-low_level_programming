#include "main.h"
/**
 * main - argc/argv
 * @argc: le count
 * @argv: le nom de l'argu
 * Return: result
*/
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
			mul = mul * atoi(argv[i]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
