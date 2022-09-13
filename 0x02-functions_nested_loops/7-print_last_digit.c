#include "main.h"

/**
 * print_last_digit - print the last digit
 * @x: the integer value
 * Return: void
 */

int print_last_digit(int x)
{
	int n  = x % 10;

	if (x < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');
	return (n);
}
