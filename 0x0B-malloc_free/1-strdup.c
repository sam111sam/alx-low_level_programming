#include <stdlib.h>
#include <string.h>
/**
 * _strdup - dynamicly copy strings
 * @str: str to be copied
 * Return: char *
 */
char *_strdup(char *str)
{
	int i;
	char *copy;

	if (str == NULL)
	{
		return (str);
	}
	copy = malloc(strlen(str) + 1);
	if (copy != NULL)
	{
		for (i = 0; str[i]; i++)
		{
			copy[i] = str[i];
		}
		copy[i] = str[i];
	}
	return (copy);
}

