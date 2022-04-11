#include "main.h"
/**
 * print_square - print square
 * @size: the size of the square
 */
void print_square(int size)
{
	int a = 0;

	while (a < size)
	{
		int b = 0;

		if (a != 0)
			_putchar('\n');
		while (b < size)
		{
			_putchar('#');
			b++;
		}
		a++;
	}
	_putchar('\n');
}
