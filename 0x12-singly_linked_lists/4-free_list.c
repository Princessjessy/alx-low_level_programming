#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: double pointer to the start of list
 */
void free_list(list_t *head)
{
	list_t *temp = head, *next = NULL;

	while (temp)
	{
		free(temp->str);
		next = temp->next;
		free(temp);
		temp = next;
	}
}
