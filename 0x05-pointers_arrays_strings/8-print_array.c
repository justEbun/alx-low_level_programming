#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the element of an array
 * @a: an integer value
 * @n: another integer value
 * return: 0
 */

void print_array(int *a, int n)
{
	int m = 0;

	while (m < n)
	{
		printf("%d", a[m]);

		if (m < n - 1)
		{
			printf(", ");
		}
		m++;
	}
	printf("\n");
}

