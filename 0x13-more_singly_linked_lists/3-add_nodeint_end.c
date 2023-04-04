#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to the start of list
 * @n: node data
 *
 * Return: the address of the new element, else, NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *last;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	/*place node first if head is NULL*/
	if (*head == NULL)
		*head = node;

	else
	{
		last = *head;
		/*if head is not null, and next is not NULL*/
		while (last->next != NULL)
			last = last->next;
		/*place our node at the end*/
		last->next = node;
	}

	return (*head);
}
