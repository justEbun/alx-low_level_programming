#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size
 * @c: the character
 * Return: the string
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc((sizeof(char) * size) + 1);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
