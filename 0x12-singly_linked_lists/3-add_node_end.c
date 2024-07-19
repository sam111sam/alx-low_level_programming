#include "lists.h"
/**
 * add_node_end - add node at the end of list
 * @head: addr of head
 * @str: value of node
 * Return: ptr to newly created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new = malloc(sizeof(list_t));

	if (!head || !str || !new)
		return (new);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (temp == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
