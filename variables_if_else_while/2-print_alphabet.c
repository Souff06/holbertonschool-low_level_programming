#include <stdio.h>

int main()
{
	char ch;

	printf("Alphabet in lowercase:\n");

	for (ch = 'a'; ch <= 'z'; ch++) {
		printf("%c ", ch);
	}

	printf("\n");

	return 0;
}
