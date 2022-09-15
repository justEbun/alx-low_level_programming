#include "main.h"

/**
 * print_square - prints a square
 * @size: the integer value
 * return: void
 */

void print_square(int size)
{
	int i;
	int n;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
