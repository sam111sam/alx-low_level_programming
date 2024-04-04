/**
 * _memcpy - copy the array
 * @dest: array to be copied to
 * @src: array to be copied
 * @n: number of byte
 *
 * Return: modified string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


