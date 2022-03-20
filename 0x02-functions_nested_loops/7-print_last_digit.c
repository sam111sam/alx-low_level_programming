#include "main.h"
/**
 * print_last_digit - pring the last digit og given number
 * @c:  the parameter
 * Return: return the last digit
 */
int print_last_digit(int c)
{
	if (c % 10 >= 0)
{
	_putchar('0' + (c % 10));
	return (c % 10);
}
	else
{
	_putchar('0' + (-(c % 10)));
	return (-(c % 10));
}
}
