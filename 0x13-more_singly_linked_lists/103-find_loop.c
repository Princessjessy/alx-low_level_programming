#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the list's head or start
 *
 * Return: the address of the node where the loop starts, else, NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *new, *tmp;

	if (head == NULL || head->next == NULL)
		return (NULL);

	new = head->next;
	tmp = (head->next)->next;

	while (tmp)
	{
		if (new == tmp)
		{
			new = head;

			while (new != tmp)
			{
				new = new->next;
				tmp = tmp->next;
			}

			return (new);
		}

		new = new->next;
		tmp = (tmp->next)->next;
	}

	return (NULL);
}
