#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puchar(*s);
		_puts_recursion(s + i);
	}
	else
		_purchar('\n');

}
