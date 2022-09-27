#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals in a square 
 * @a: 2d array
 * @size: number matrix
 */

void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	s1 = 0;
	s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + *(a + i * size + i);
		s2 = s2 + *(a + i * size + size - i - 1);
	}
	_putchar(s1);
	_putchar(s2);
	_putchar('\n');
}
