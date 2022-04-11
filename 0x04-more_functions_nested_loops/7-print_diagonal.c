#include "main.h"
/**
 * print_diagonal - print diagonal size n
 * @n: parameter
 */
void print_diagonal(int n)
{
	int a = 0;

	while (a < n)
	{
		int b = 0;

		if (a > 0)
		_putchar('\n');
		while (b < n)
		{

			if (a == b)
			{
				_putchar('\\');

			}
			else
			{
				if (a > b)
				_putchar(' ');
			}
			b++;
		}
		a++;
	}
	_putchar('\n');
}
