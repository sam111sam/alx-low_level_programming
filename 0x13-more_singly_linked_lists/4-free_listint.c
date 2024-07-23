#include "lists.h"
/**
 * free_listint - free the space
 * @head: the head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current)
	{
		current = current->next;
		free(head);
		head = current;
	}
}
