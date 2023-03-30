#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the start of list
 * @str: node data
 *
 * Return: the address of the new element, else, NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (!ptr)
	{
		return (NULL);
	}
	ptr->len = strlen(str);
	ptr->str = strdup(str);
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return (ptr);
}
