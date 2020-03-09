#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Define a new type struct dog with the following elements:
 * @d: pointer to structure
 * @name: pointer to the dog
 * @age: pointer to the age of the dog
 * @owner: pointer to owner of ehe dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
