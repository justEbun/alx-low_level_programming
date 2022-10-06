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
	if (min > max)
	{
		return (NULL);
	}

	char *s;
	int i;

	s = malloc(sizeof(char) * (max - min));

	for (i = 0; i < max - min; i++)
	{
		if (s == 0)
		{
			return (NULL);
		}
		return (s);
	}
}
