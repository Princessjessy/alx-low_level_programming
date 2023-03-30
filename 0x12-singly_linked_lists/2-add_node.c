#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the start of list
 * @str: node data
 *
 * Return: the address of the new element, else, NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (!ptr)
	{
		return (NULL);
	}

	ptr->len = strlen(str);
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
