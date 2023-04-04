#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to the start of list
 * @n: node data
 *
 * Return: the address of the new element, else, NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	/*add new node at the beginning of the list*/
	node->next = *head;
	/*go to the next node*/
	*head = node;

	return (node);
}
