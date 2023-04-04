#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: double pointer to the start of list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head, *net = NULL;

	while (tmp)
	{
		net = tmp->next;
		free(tmp);
		tmp = net;
	}
}
