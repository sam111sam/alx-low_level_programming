#include "lists.h"
/**
 * list_len - no list
 * @h: head
 * Return: no list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
