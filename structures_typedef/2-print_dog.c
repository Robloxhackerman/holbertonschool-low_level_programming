#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a dog
 *
 * @d: a dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}

	if (d->age != 0)
	{
		printf("Name: %f\n", d->age);
	}
	else
	{
		printf("Name: (nil)\n");
	}

	if (d->owner != NULL)
	{
		printf("Name: %s\n", d->owner);
	}
	else
	{
		printf("Name: (nil)\n");
	}
}
