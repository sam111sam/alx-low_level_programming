#include "main.h"
/**
 *print_alphabet_x10 - print lower case alpha 10x
 */
void print_alphabet_x10(void)
{
	int c = 1;
	char a = 'a';
while (c <= 10)
{
	a = 'a';
while (a <= 'z')
{
	_putchar(a);
	a++;
}
	_putchar('\n');
	c++;
}
}
