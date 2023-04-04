#include "lists.h"

/**
 * print_listint -  prints all the elements of a list_t list
 * @h: pointer to list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int j = 0;

	while (h)
	{
		/*print last node*/
		printf("%i\n", h->n);
		/*go to the next node*/
		h = h->next;
		j++;
	}
	return (j);
}
