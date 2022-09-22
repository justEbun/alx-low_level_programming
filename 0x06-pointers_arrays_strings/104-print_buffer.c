#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: the buffer
 * @size: number of bytes
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int t, i;

	for (t = 0; t < size; t += 10)
	{
		printf("%08x: ", t);

		for (i = 0; i < 10; i++)
		{
			if ((i + t) >= size)
				printf(" ");
			else
				printf("%02x", *(b + i + t));
			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}
		for (i = 0; i < 10; i++)
		{
			if ((i + t) >= size)
				break;
			else if (*(b + i + t) >= 31 && *(b + i + t) <= 126)
				printf("%c", *(b + i + t));
			else
				printf(".");
		}
		if (t >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
