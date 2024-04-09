#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "abcdef";
	char *f = "";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", (t == NULL ? "nil" : t));
	t = _strpbrk(f, s);
	printf("%s\n", (t == NULL ? "nil" : t));
	return (0);

}
