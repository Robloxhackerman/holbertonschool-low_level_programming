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
	char PEPE_N, PEPE_O, PEPE_A;

	if (d->name == NULL)
	{
		PEPE_N = "nil";
	}
	else
	{
		PEPE_N = d->name;
	}

	if (d->owner == NULL)
	{
		PEPE_O = "nil";
	}
	else
	{
		PEPE_O = d->owner;
	}

	if (d->age == NULL)
	{
		PEPE_A = "nil";
	}
	else
	{
		PEPE_A = d->age;
	}

	printf("Name: %s\n", PEPE_N);
	printf("Age: %s\n", PEPE_A);
	printf("Owner: %s\n", PEPE_O);
}

