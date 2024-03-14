#include "main.h"
/**
 * array_range - cree un tab
 * @min: le nombre min
 * @max: le nomb max
 * Return: le pointer tab
*/

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		array[i] = min++;
	return (array);
}
