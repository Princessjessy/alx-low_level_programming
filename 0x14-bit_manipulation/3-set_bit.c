#include "main.h"

/**
 * set_bit - sets the value of a bit to 1. at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int sum;

	if (index > 63)
		return (-1);

	sum = 1 << index;
	/*shift the value in set left by 1 bit.*/
	/*sum <<= index is the same as sum = sum << index*/
	*n = (*n | sum);
	/*bitwise OR operator*/
	return (1);
}
