#include "main.h"
/**
 * puts_half - prints 2nd half of a string
 * @str: parameter
 */
void puts_half(char *str)
{
	char *p;
	int count = 0, i = 0;

	p = str;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	while (i < count)
	{
		if (count % 2 == 0)
		{
			if (i >= count / 2)
			_putchar(*(str + i));
		}
		else
		{
			if (i > count / 2)
			_putchar(*(str + i));
		}

		i++;
	}
	_putchar('\n');
}
