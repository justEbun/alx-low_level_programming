#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width
 * @height: the height
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);
		if (s == NULL)
		{
			if (s[i] == NULL)
			{
				for (i -= 1; i >= 0; i--)
				{
					free(s[i]);
				}
				free(s);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			if (s == NULL)
			{
				return (NULL);
			}
			s[i][j] = 0;
		}
	}
	return (s);
}
