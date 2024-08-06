#include <ctype.h>
/**
 * binary_to_uint - str to unsigned
 * @b: string
 * Return: uint
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (!isdigit(b[i]))
			return (0);

		x = x * 2 + b[i] - '0';
		i++;
	}
	return (x);
}
