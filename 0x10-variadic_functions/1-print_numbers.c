#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print args separated by char
 * @separator: separate no.
 * @n: no. os args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{

		if (*separator && separator && i < n - 1)
		{
			printf("%i%c ", va_arg(nums, int), *separator);
		}
		else
		{
			printf("%i", va_arg(nums, int));
		}
	}
	printf("\n");
}
