#include "main.h"
#include <stdio.h>
/**
 * main - eazy en vrai
 * Return: Always 0.
*/

int main(void)
{
	int a = 2;

	printf("1");
	for (; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf(" FizzBuzz");
		else if (a % 3 == 0)
			printf(" Fizz");
		else if (a % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", a);
	}
	printf("\n");
	return (0);
}
