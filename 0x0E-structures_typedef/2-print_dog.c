#include <stddef.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print struct dog
 * @d: ptr to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");

		if (d->name != NULL)
		{
			printf("%s\n", d->name);
		}
		else
		{
			printf("nil\n");
		}

		printf("Age: %.6f\n", d->age);
		
		if (d -> owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("nil\n");
	}
}
