#include "main.h"
/**
 * more_numbers - print 0 to 9
 */
void more_numbers(void)
{
	int b = 0;

	while (b <= 9)
	{
		int a = 0;

		while (a <= 14)
		{
			if (a > 9)
				_putchar('0' + a / 10);
			_putchar('0' + a % 10);
			a++;

		}
		_putchar('\n');

		b++;
	}
}
