#include "search_algos.h"

/**
 * min - finds the minimum between two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the minimum number
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * jump_list - a function that searches for a value in a sorted list
 *		of integers using the Jump search algorithm
 * @list: is a pointer to the first element of the list to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev = list, *step = NULL;
	size_t i = 0, j = 0, index = sqrt(size);

	if (!list)
		return (NULL);

	/* find the block that may contain the value */
	while (list->n < value && j < size - 1)
	{
		prev = list;
		i = j;
		while (j < index && j < size - 1)
		{
			list = list->next;
			j++;
		}
		printf("Value checked at index [%ld] = [%d]\n", j, list->n);
		step = list;
		index += sqrt(size);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, j);

	/* linear search */
	while ((i <= min(i, size - 1)) && (prev->n <= value))
	{
		printf("Value checked at index [%ld] = [%d]\n", i, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
		i++;
	}
	return (NULL);
}
