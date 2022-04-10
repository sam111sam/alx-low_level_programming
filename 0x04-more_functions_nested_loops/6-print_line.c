#include "main.h"
/**
 * print_line - print _ n times
 * @n: parameter
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
