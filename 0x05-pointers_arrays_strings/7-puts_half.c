#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: thr character value
 * return: 0
 */

void puts_half(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
		;
	s++;
	for (s /= 2; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
