#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: character value
 * Return: returns the value of converted string
 */

int _atoi(char *s)
{
	int i = 1;
	unsigned int n = 0;

	while (*s++)
	{

		if (*s == '-')
			i *= -1;

		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');

		else if (num > 0)
			break;
	}
	return (n * i);
}
