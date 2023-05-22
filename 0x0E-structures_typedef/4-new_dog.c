#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 *
 * @name: string
 * @age: float
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int q, s, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (q = 0; name[q]; ++q)
		;
	dog->name = malloc(q + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (s = 0; owner[s]; ++s)
		;
	dog->owner = malloc(s + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= q; i++)
		dog->name[i] = name[i];
	for (i = 0; i <= s; i++)
		dog->owner[i] = owner[i];
	dog->age = age;
	return (dog);
}
