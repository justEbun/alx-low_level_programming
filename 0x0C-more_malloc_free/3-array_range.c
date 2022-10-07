#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min:
 * @max:
 * Return:
 */

int *array_range(int min, int max)
{
	int *s;
	int i, len;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;
	s = malloc(sizeof(int) * len);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
		s[i] = min++;

	return (s);
}
