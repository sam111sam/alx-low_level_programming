#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - add athe beg of list
 * @head: addr of head
 * @str: eleemet
 * Return: list_t *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (!head || !temp || !str)
		return (NULL);

	temp->len = strlen(str);
	temp->str = strdup(str);
	temp->next = NULL;

	temp->next = (*head);
	*head = temp;
	return (temp);
}

