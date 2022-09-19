#include "main.h"

/**
 * puts2 - prints every other character of a string, starting from the first
 * @str: the character value
 * return: 0
 */

void puts2(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		if (s % 2 == 0)
		{
			_putchar(str[s]);
		}
		s++;
	}
	_putchar('\n');
}
