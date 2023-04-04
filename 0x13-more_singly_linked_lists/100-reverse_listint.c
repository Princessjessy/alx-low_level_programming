#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to linked list
 * Return:a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *net = NULL;

	while (*head)
	{
		net = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = net;
	}
	*head = node;
	return (*head);
}
