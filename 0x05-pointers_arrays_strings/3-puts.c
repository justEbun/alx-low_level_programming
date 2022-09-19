#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: character value
 * return: 0
 */

void _puts(char *str)
{
	int s = 0;

	while (str[s])
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
