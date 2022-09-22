#include "main.h"

/**
 * *_strcmp - compares two strings
 * @s1: character value
 * @s2: character value
 * Return: 0
 */

char *_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
