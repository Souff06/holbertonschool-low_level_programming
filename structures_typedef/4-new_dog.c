#include "dog.h"
/**
  * new_dog - crée une nouvelle structure de type chien
  * @name: nom du paramètre de la structure
  * @age: paramètre struct age
  * @owner: struct parameter owner
  * Return: renvoie un pointeur vers un tampon de données de type dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, i;
	dog_t *doggy;

	nlen = olen = 0;
	while (name[nlen++])
		;
	while (owner[olen++])
		;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(nlen * sizeof(char));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < nlen; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(olen * sizeof(char));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < olen; i++)
		doggy->owner[i] = owner[i];

	return (doggy);
}
