#include "dog.h"
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
	if (name != NULL)
		d->name = name;

	d->age = age;

	if (owner != NULL)
		d->owner = owner;
}
