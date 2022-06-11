#include "main.h"
/**
 * _strcpy - copy string to buffer
 * @dest: parameter1
 * @src: parameter 2
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\n')
	{
		dest[i] = *(src + i);
		i++;
	}
	dest[i] = '\n';
	return (dest);
}

