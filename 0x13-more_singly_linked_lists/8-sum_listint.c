#include "lists.h"
/**
 * sum_listint - sum of the list
 * @head: head
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

