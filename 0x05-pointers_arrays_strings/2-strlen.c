#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: the character value
 * Return: void
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}
