#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print string
 * @separator: the str separator
 * @n: no. string
 * @...: variable args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *tmp;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(strings, char *);

		if (tmp)
			printf("%s", tmp);
		else
			printf("%s", "(nil)");

		if (separator && i < n - 1)
			printf("%s",  separator);
	}
	printf("\n");
}
