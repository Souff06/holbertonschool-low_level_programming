#include "function_pointers.h"
/**
 * print_name - afficher le nom
 * @name: son name
 * @f: chaine de caract
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
