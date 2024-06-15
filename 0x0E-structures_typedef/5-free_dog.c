#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free allocated spce qn 4
 * @d: ptr to struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
		return;
	}

	if (d->name)
	{
		free(d->name);
	}

	if (d->owner)
	{
		free(d->owner);
	}
}
