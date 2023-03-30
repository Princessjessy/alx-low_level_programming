#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * @h: pointer to list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		i++;
	}
	return (i);
}
