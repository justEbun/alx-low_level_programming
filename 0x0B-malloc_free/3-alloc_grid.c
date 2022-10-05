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

	s = (int **)malloc(sizeof(int*) * height);


	for (i = 0; i < height; i++)
	{
	if (s == NULL)
	{
		return (NULL);
	}
		s[i] = (int *)malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
	if (s == NULL)
	{
		return (NULL);
	}
		s[i] = (int *)malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	return (s);
}
