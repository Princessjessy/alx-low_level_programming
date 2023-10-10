#include "search_algos.h"
#include <stdlib.h>
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
 * print_array - prints an array
 * @array: a pointer to the first element of the array to print
 * @low: the first index to print
 * @high: the last index to print
 */
void print_array(int *array, size_t low, size_t high)
{
	char *separator = NULL;

	printf("Searching in array: ");
	for (; low <= high; low++)
	{
		if (separator)
			printf("%s%d", separator, array[low]);
		else
			printf("%d", array[low]);
		separator = ", ";
	}
	printf("\n");
}
/**
 * binary_helper - helper function to binary_search
 * @array: a pointer to the first element of the array to search in
 * @low: start point
 * @high: end point
 * @value: the value to search for
 *
 * Return: the first index where value is located, else, -1
 */
int binary_helper(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low != high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	if (array[low] == value)
		return (low);
	printf("Searching in array: %d\n", array[low]);
	return (-1);
}
/**
 * exponential_search - searches for a value in an array of integers using the
 *              exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, else, -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, j;

	if (array == NULL)
		return (-1);

	/* If x is present at first location itself */
	if (array[0] == value)
	{
		printf("Value checked array[%d] = [%d]\n", 0, array[0]);
		return (0);
	}

	/* Find range for binary search by repeated doubling */
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		i *= 2;
	}
	j = min(i, size - 1);
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, j);

	return (binary_helper(array, i / 2, min(i, size - 1), value));
}
