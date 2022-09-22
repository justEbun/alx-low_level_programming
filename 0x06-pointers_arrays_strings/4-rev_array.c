#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: integer value
 * @n: integer value
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int p, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		p = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = p;
	}
}
