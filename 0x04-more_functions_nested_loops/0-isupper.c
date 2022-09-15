#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * @c: the integer value
 * Return: 0 if true and 1 if not
 */

int _isupper(int c)
{
	if (c <= 'z')
	{
		return (1);
	}
	else if (c <= 'Z')
	{
		return (0);
	}
