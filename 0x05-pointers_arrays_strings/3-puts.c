#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: character value
 * return: void
 */

void _puts(char *str)
{
	char s[100];

	fgets(s, sizeof(s), stdout);
	str = printf("%s\n", s);
	return (str);
}
