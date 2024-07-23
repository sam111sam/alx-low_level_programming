#include "lists.h"
/**
 * add_nodeint_end - add to the end of the list
 * @head: addr of head
 * @n: value of new node
 * Return: addr of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!temp)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
