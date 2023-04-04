#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t linked list
 * @head: pointer to the start of list
 * @index: is the index of the node, starting at 0
 *
 * Return: the node at n
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;

	if (head == NULL)
		;
	else
	{
		node = head;
		while (index != 0 && node)
		{
			node = node->next;
			index--;
		}
		if (index == 0)
		{
			return (node);
		}
	}
	return (NULL);
}
