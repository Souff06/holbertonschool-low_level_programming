#include "dog.h"
/**
 * init_dog - initialise la structure dog.
 * @d: nom de la structure
 * @name: nom du chien dans la structure
 * @age: âge du chien dans la structure
 * @owner: nom du propriétaire du chien dans la structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
