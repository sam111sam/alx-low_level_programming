#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

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
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = malloc(strlen(name) + 1);
	ptr->owner = malloc(strlen(owner) + 1);

	if (ptr->name == 0 || ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr->owner);
		return (NULL);
	}

	strcpy(ptr->name, name);
	ptr->age = age;
	strcpy(ptr->owner, owner);
	return (ptr);
}
