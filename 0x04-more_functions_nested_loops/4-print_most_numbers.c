#include "main.h"
/**
 * print_most_numbers - print 0 to 9 leaving 2 & 4
 */
void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a == 2 || a == 4)
		{
			a++;
			continue;
		}
		_putchar('0' + a);
		a++;
	}
	_putchar('\n');
}
