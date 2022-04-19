#include "main.h"
/**
 * _strlen - print slen
 * @s: parameter
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
/**
 * print_rev - print string
 * @s: parameter
 */
void print_rev(char *s)
{
	int max = _strlen(s);
	int i = 0;

	while (i < max)
	{
		_putchar(*(s + (max - 1)));
		max--;
	}
	_putchar('\n');
}
