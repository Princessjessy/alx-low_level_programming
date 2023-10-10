#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 *			using the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (interpolation(array, 0, size - 1, value));
}

/**
 * interpolation - helper function to interpolation_search
 * @array: is a pointer to the first element of the array to search in
 * @low: is the start element
 * @high: is the end element
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */
int interpolation(int *array, size_t low, size_t high, int value)
{
	int position;

	if (low <= high)
	{
		position = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (value < array[low] || value > array[high])
		{
			printf("Value checked array[%d] is out of range\n", position);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", position, array[position]);
		if (array[position] == value)
			return (position);

		if (array[position] < value)
			return (interpolation(array, position + 1, high, value));

		if (array[position] > value)
			return (interpolation(array, low, position - 1, value));
	}
	return (-1);
}
