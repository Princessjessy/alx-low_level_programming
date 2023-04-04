#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: double pointer to the start of list
 * @index: index is the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, else, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = NULL, *node = NULL;

	if (*head == NULL)
		;
	else
	{
		tmp = *head;
		if (index == 0)
		{
			tmp = *head;
			*head = temp->next;
			free(tmp);
			return (1);
		}

		while (index != 1 && tmp)
		{
			tmp = tmp->next;
			index--;
		}
		if (index == 1)
		{
			node = tmp->next;
			tmp->next = node->next;
			free(node);

			return (1);
		}
	}
	return (-1);
}
