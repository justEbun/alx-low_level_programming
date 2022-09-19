#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: character value
 * return: void
 */

void _puts(char *str)
{
	char str[100];

	fgets(str, sizeof(str), stdout);
	printf("%s\n", str);
}
