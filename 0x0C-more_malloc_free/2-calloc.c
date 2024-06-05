#include <stdlib.h>
/**
 * _calloc - implementation of calloc
 * @nmemb: no of size byte
 * @size: no byte
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb * size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p)
	{
		for (i = 0; i < nmemb * size; i++)
		{
			p[i] = 0;
		}
	}
	return ((void *) p);
}
