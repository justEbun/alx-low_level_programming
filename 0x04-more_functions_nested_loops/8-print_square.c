#include "main.h"

/**
 * print_square - prints a square
 * @size: the integer value
 * return: void
 */

void print_square(int size)
{
	int i = 0;
	int c = 0;

	while (i < size && size > 0)
	{
		while (c < size)
		{
			_putchar('#');
			c++;
		}
		_putchar('/n');
		i++;
	}
	if (size == 0)
		_putchar('\n');
}
