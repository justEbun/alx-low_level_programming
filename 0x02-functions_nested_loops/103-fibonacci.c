#include <stdio.h>

/**
 * main - Entry point
 *
 * return: 0
 */

int main(void)
{
	int a = 0, b = 1, n = 0, s = 0;

	while (n < 4000000)
	{
		n = a + b;
		a = b;
		b = n;
		if (n % 2 == 0)
			s += n;
	}
	printf("%d\n", s);
	return (0);
}
