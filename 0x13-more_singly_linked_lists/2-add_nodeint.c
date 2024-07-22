#include "lists.h"
/**
 * add_nodeint - add at the beg
 * @head: addr of head node
 * @n: value
 * Return: ptr to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->next = *head;
	new->n = n;

	*head = new;
	return (new);
}
