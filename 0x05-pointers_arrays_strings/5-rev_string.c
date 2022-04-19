#include "main.h"
/**
 * rev_string - print string
 * @s: parameter
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	int a[10];

	while (i < 9)
	{
		a[i] = s[i];
		i++;
	}
	while (j < 9)
	{
		s[j] = a[8 - j];
		j++;
	}

}
