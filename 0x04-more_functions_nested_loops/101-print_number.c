#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer value
 * return: 0
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
