#include "lists.h"
/**
 * listint_len - len of list
 * @h: head node
 * Return: list no
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
