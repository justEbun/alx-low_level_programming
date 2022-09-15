#include "main.h"

/**
 * print_numbers - prints number 0 to 9
 * return: 0
 */

void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		_putchar('\n');
		i++;
	}
}
