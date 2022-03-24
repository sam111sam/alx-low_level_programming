#include "main.h"
/**
 * print_times_table - n times table
 * @n: parameter n
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int a = 0;

		while (a <= n)
		{
			int b = 0;

			while (b <= n)
			{
				int sum = a * b;

				if (b != 0)
				{
					_putchar(',');
					if (sum < 10)
					{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');

					}
					else if (sum < 100)
					{
						_putchar(' ');
						_putchar(' ');

					}
					else
						_putchar(' ');


				}
				digit(sum);
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
/**
 * digit - print all digit
 * @sum: input parameter
 */
	void digit(int sum)
	{
if (sum < 10)
{
_putchar('0' + sum);
}
else
{
digit(sum / 10);
_putchar('0' + sum % 10);
}
}
