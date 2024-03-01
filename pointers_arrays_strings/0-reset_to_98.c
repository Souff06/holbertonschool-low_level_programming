#include "main.h"
/**
 * reset_to_98 - pointer n avec *p=98
 * @n: variable pointer
*/

void reset_to_98(int *n)
{
	int *p = &*n;
	*p = 98;

	printf("%d\n", *p);
}
