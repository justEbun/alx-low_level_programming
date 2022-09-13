#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	int n = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			n += 1;
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
