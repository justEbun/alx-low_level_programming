#include "main.h"

/**
 * print_array - prints the element of an array
 * @a: an integer value
 * @n: another integer value
 * return: 0
 */

void print_array(int *a, int n)
{
	int m = 0;

	for (n-- ; n >= 0 ; n--, m++)
	{
		printf("%d", a[m]);
		if (n > 0)
		{
			printf(", ");
		}
		printf("\n")
	}
