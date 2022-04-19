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
 * _puts - print string
 * @str: parameter
 */
void _puts(char *str)
{
	int max = _strlen(str);
	int i = 1;

	while (i <= max)
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
