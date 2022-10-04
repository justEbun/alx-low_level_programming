#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: new string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int n;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n = strlen(s1) + strlen(s2) + 1;
	s = malloc(sizeof(char) * n);

	if (s == 0)
	{
		return (NULL);
	}

	strcpy(s, s1);
	strcat(s, s2);
	return (s);
}
