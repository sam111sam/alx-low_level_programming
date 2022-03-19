#include "main.h"
/**
 * print_sign - prints sign of number
 * @n: the number in which its sign will be checked
 * Return: 1,-1 || 0
 */
int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
	else if (n < 0)
{
	_putchar('-');
	return (-1);
}
	else
	_putchar('0');
	return (0);
}
