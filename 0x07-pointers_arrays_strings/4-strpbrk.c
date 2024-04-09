#include <stddef.h>
#include <string.h>

/**
 * 
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: sring given
 * @accept: char to be found
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p = &s[strlen(s)];
	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (accept[i] == s[j] && &s[j] < p)
			{
				p = &s[j];
			}
		}
	}
	if (p < &s[j])
		return (p);
	return (NULL);
}
