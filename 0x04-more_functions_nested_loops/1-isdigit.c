#include "main.h"

/**
 * _isdigit - checks of the character is a number
 * @c: the integer value
 * Return: 0 if true and 1 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
