#include "main.h"
/**
 * _strlen - return length of string
 * @s: - parameter
 * Return: int
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
