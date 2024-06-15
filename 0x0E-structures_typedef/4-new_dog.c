#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - fn for struct creating
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
