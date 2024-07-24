#include "lists.h"
/**
 * get_nodeint_at_index - get value at that index
 * @head: head
 * @index: index
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; head && i < index; i++)
	{
		head = head->next;
	}
	if (!head)
		return (NULL);

	return (head);
}



