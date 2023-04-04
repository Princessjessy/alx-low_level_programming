#include "lists.h"

/**
 * listint_len - finds the number of elements in a linked list_t list
 * @h: pointer to list
 *
 * Return: the result
 */
size_t listint_len(const listint_t *h)
{
	unsigned int j = 0;

	while (h)
	{
		j++;
		/*go to next node*/
		h = h->next;
	}
	return (j);
}
