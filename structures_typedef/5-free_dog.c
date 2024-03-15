#include "dog.h"
/**
  * free_dog - libère la mémoire allouée par dog.
  * @d: pointeur sur la structure
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
