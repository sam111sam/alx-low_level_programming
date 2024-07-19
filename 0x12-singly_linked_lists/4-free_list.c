#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free_list
 * @head: addr 1st node
 * Return: void
 */
void free_list(list_t *head)
{
	if (!head)
		return;
	free_list(head->next);

	free(head->str);
	free(head);
}
