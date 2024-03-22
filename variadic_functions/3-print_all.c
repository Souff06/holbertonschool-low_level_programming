#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - tout afficher
 * @format: le type du carac afficher
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
		}
		if ((format[i + 1] != '\0') &&
		(format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(args);
}
