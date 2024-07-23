#include "lists.h"
/**
 * free_listint2 - free
 * @head: address of head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (!head)
		return;
	temp = current = *head;

	while (current)
	{
		current = current->next;
		free(temp);
		temp = current;
	}
	*head = current;
}
