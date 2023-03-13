#include <stdlib.h>
#include "main.h"

/**
* create_array - create array of size size and assign char c
* @size: size of array
* @c: char to assign
* Description: creat array of size size and assign char c
* Return: pointer to array, NULL if fail
*
*/  

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
