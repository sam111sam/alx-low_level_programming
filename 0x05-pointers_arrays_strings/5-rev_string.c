#include "main.h"
/**
 * rev_string - print string
 * @s: parameter
 */
void rev_string(char *s)
{
	int count = 0, i = 0;
	char tmp, *p;

	p = s;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	while (i  < (count / 2))
	{
		tmp = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = tmp;
		i++;
	}
}
