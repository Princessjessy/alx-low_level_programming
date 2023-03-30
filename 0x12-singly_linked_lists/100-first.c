#include <stdio.h>
/**
 * print - prints a string before the main function
 */
void print(void) __attribute__ ((constructor));

void print(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
