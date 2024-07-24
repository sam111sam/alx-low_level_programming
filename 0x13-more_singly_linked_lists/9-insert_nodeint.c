#include "lists.h"
/**
 * insert_nodeint_at_index - inser node
 * @head: address of head
 * @idx: index to insert to
 * @n: value of new node
 * Return: addr of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	for (i = 0; temp && i < idx - 1; i++)
	{
		temp = temp->next;
	}

	if (!temp)
		return (NULL);
	new->next = temp->next;
	temp->next = new;
	return (new);
}
