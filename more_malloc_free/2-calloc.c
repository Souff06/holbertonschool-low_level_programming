#include "main.h"
/**
 * _calloc - Redimmensionne l'espace allouer
 * @nmemb: les elements du tab
 * @size: la taille en bytes
 * Return: le pointer du tab
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		ar[i] = 0;
	}
	return (ar);
}
