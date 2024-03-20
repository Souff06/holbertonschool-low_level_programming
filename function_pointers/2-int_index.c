#include "function_pointers.h"
/**
 * int_index - affiche combien de fois la comparaison est ok
 * @array: le tableau avec les elements
 * @size: la taille du tableau
 * @cmp: l'element de comparaison pour le tab
 * Return: le nombre de comp valid
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
