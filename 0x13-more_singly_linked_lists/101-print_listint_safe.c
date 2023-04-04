#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to start of the list
 *
 * Return: number of nodes in the list, else, exit(98)i
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head, *temp = head;
	size_t isLoop = 0, nodes = 0;

	if (!head)
	{
		printf("0\n");
		exit(98);
	}
	while (tortoise && hare && hare->next)
	{
		/* Detecting if linked list is looped */
		tortoise = tortoise->next, hare  = hare->next->next;
		if (tortoise == hare)
		{
			isLoop = 1;
			break;
		}
	}
	/* if linked list is not looped */
	if (!isLoop)
	{
		while (temp)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next, nodes++;
		}
		return (nodes);
	}
	else
		return (looped_printing(head));
}
/**
 * looped_printing - prints a looped linked list
 * @head: pointer to the list's head
 *
 * Return: number of nodes
 */
size_t looped_printing(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head, *temp = head;
	size_t nodes = 0;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next, hare  = hare->next->next;
		if (tortoise == hare)
			break;
	}
	while (1)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next, nodes++;
		if (temp == tortoise)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				printf("[%p] %d\n", (void *)hare, hare->n);
				hare = hare->next, nodes++;
			}
		}
		else
			continue;
		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)hare, hare->n);
			return (nodes);
		}
	}
	return (nodes);
}
