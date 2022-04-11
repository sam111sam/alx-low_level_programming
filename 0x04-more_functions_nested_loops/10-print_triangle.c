#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int a = 0;

	while (a < size)
	{
		int b = 0;

		if (a != 0)
			_putchar('\n');
		while (b < size)
		{
			if (a + b >= size - 1)
			{
				_putchar('#');
			}
			else
				_putchar(' ');
			b++;
		}
		a++;
	}
	_putchar('\n');
}
