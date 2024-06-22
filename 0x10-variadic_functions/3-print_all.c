#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prinf like func
 * @format: format string
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int flag = 0, i = 0;
	char *tmp;

	va_start(args, format);

	while (format && format[i])
	{
		if (flag)
			printf(", ");
		flag = 0;

		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(args, int));
				flag = 1;
				break;

			case 'i':
				printf("%d", va_arg(args, int));
				flag = 1;
				break;

			case 'f':
				printf("%f", va_arg(args, double));
				flag = 1;
				break;

			case 's':
				tmp = va_arg(args, char *);
				flag = 1;

				if (tmp == 0)
					tmp = "(nill)";
				printf("%s", tmp);
		}
		i++;
	}
	printf("\n");
}
