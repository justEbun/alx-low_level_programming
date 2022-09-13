#include <stdio.h>

/**
 * main - to check the code
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	long l = 1, m = 2;

	while (i < 50)
	{
		if (i == 0)
		{
			printf("%ld", l);
		}
		else if (i == 1)
		{
			printf(", %ld", m);
		}
		else
		{
			m += l;
			l = m - l;
			printf(", %ld", m);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
