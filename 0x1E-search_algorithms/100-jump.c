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
 * jump_search - a function that searches for a value in a sorted array
 *		of integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t step = 0;

	if (!array || !size)
		return (-1);

	/* find the block that may contain the value */
	while (array[min(step, size - 1)] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
		if (step > (size - 1))
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			prev, step);

	/* linear search */
	while ((prev <= min(step, size - 1)) && (array[prev] <= value))
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
