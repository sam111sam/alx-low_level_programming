#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * @head: addr of head
 * @index: index
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *current = *head;
	
	unsigned int i;

	if (index == 0)
	{
		if (!temp)
			return (-1);
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (0);
	}
	for (i = 0; i < index - 1 && temp; i++)
	{
		current = temp;
		temp = temp->next;
	}
	if (!temp)
		return (-1);

	current->next = temp->next;
	free(temp);
	return (0);
}
	

