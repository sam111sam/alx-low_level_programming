#include "dog.h"
#include <stddef.h>
/**
 * init_dog - intialize struct
 * @d: ptr to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
