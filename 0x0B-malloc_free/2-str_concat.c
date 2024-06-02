#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatinate string
 * @s1: str 1
 * @s2: str 2
 * Return: char *
 */
char *str_concat(char *s1, char *s2)
{
	char *text;
	int len = 0;
	int l1 = 0;
	int l2 = strlen(s2);
	int i;

	if (s1 != NULL)
	{
		l1 = strlen(s1);
		len += l1;
	}
	if (s2 != NULL)
	{
		l2 = strlen(s2);
		len += l2;
	}
	text = malloc(len + 1);

	if (text != NULL)
	{
		for (i = 0; s1[i]; i++)
		{
			text[i] = s1[i];
		}

		for (i = 0; s2[i]; i++)
		{
			text[i + l1] = s2[i];
		}
		text[i + l1] = '\0';
	}
	return (text);
}


