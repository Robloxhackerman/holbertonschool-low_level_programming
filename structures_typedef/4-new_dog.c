#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: a dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int PEPE1, PEPE2, PEPE3;
	dog_t *PEPEPERRON;

	for (PEPE1 = 0; name[PEPE1] != '\0'; PEPE1++)
		;
	PEPE1++;
	for (PEPE2 = 0; owner[PEPE2] != '\0'; PEPE2++)
		;
	PEPE2++;
	PEPEPERRON = malloc(sizeof(dog_t));
	if (PEPEPERRON == 0)
	{
		free(PEPEPERRON);
		return (NULL);
	}
	PEPEPERRON->name = malloc(sizeof(PEPEPERRON->name) * PEPE1);
	if (PEPEPERRON->name == 0)
	{
		free(PEPEPERRON->name);
		free(PEPEPERRON);
		return (NULL);
	}
	for (PEPE3 = 0; PEPE1 > PEPE3; PEPE3++)
		PEPEPERRON->name[PEPE3] = name[PEPE3];
	PEPEPERRON->age = age;
	PEPEPERRON->owner = malloc(sizeof(PEPEPERRON->owner) * PEPE2);
	if (PEPEPERRON->owner == 0)
	{
		free(PEPEPERRON->owner);
		free(PEPEPERRON->name);
		free(PEPEPERRON);
		return (NULL);
	}
	for (PEPE3 = 0; PEPE3 < PEPE2; PEPE3++)
		PEPEPERRON->owner[PEPE3] = owner[PEPE3];
	return (PEPEPERRON);
}
