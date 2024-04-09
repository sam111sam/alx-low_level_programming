#include <stdio.h>
/**
 * set_string - chanhe string
 * @s: pointer to pointer
 * @to: string to be copied
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
