#include <stddef.h>
/**
 * _strchr - char in str finder
 * @s: string
 * @c: char to be found
 *
 * Return: pointer to c or NUll
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (c == 0)
		return (&s[i]);

	return (NULL);
}
