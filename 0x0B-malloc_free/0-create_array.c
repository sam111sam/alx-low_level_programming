#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array dynamicly
 * @size: array size
 * @c: char to fill the array
 * Return: char *
 */
char *create_array(unsigned int size, char c)
{
	char *text;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	text = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		text[i] = c;
	}
	return (text);
}


