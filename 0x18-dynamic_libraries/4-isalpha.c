#include "main.h"
/**
 * _isalpha - checks for alphabetic characte
 * @x: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int x)
{
	return ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'));
}
