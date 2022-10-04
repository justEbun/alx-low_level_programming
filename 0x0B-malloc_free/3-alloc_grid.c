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
	int* s;
	int i;

	s = malloc(sizeof(int) * (width * height));

	for (i = 0; i < width * height; i++)
	{
		s[i] = 0;
	}
	return (s);
}
