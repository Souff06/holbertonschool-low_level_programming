#include "main.h"
/**
 * main - argc/argv
 * @argc: le count
 * @argv: le nom de l'argu
 * Return: result
*/
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
	return (-1);
}
