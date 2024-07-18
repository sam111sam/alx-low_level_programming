#include "lists.h"
/**
 * print_list - print list
 * @h: header
 * Return: no list
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str != 0)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		len++;
	}
	return (len);
}

