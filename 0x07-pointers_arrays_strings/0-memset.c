/**
 * _memset - overwrite the array until given size
 * @s: the string
 * @b: the char to be filled
 * @n: no of char to be overwritten
 * Return: modified string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

