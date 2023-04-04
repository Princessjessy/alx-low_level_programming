#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the start of list
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int net;

	if (*head == NULL)
		return (0);

	temp = *head;
	net = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (net);
}
