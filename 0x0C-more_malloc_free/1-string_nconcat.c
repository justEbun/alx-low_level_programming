#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: length of s2 needed
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	char *s;
	int len;

	len = strlen(s1) + n;
	s = malloc((sizeof(char) * len) + 1);

	if (s == 0)
	{
		return (NULL);
	}

	strcpy(s, s1);
	strncat(s, s2, n);

	return (s);
}
