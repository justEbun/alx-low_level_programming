#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - duplicates a string
 * @str: the string
 * Return: the duplicated string
 */

char *_strdup(char *str)
{
	int n;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	n = strlen(str);
	s = malloc((sizeof(char) * n) + 1);

	if (s == 0)
	{
		return (NULL);
	}
	strcpy(s, str);
	return (s);
}
