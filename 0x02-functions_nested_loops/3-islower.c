#include "main.h"

/**
 * _islower - print lowercase of c
 * @c: the integer value
 * Return: 1 if true and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
