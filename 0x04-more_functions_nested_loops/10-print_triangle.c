#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the integer value
 * return: void
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;
	int d;

	if (size > 0)
	{
		c = size - 1;
		for (a = 0; a < size; a++)
		{
			for (b = c; b > 0; b++)
			{
				_putchar(' ');
			}

			for (d = 0; d <= a; d++)
			{
				_putchar(35);
			}
			c--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
