#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatinate str
 * @s1: txt 1
 * @s2: txt 2
 * @n: no s2 to be copy
 * Return: char *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *text;
	unsigned int len = 0, i, l1 = 0, l2 = 0;

	if (s1)
	{
		l1 = strlen(s1);
		len += l1;
	}

	if (s2 != NULL)
	{
		l2 = strlen(s2);

		if (strlen(s2) <= n)
			len += l2;
		else
			len += n;
	}

	text = malloc(sizeof(char) * len + 1);

	if (text)
	{
		for (i = 0; s1 && i < l1; i++)
		{
			text[i] = s1[i];
		}

		for (i = 0; s2 && i < n && i <= l2; i++)
		{
			text[l1 + i] = s2[i];
		}

		if (n < l2)
			text[l1 + n] = '\0';
		else if (l2 == 0)
			text[l1] = '\0';
	}
	return (text);
}
