#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - Prints name, age and owner if not null
 * @d: is pointer to the struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("name: (nil)\n");
	}
	else
	{
		printf("name: %s\n", d->name);
	}
	printf("age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("owner: %s\n", d->owner);
	}
}
