#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum no of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int p, t, c, a;
	int coin[] = {25, 10, 5, 2, 1};

	p = t = c = a = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	t = atoi(argv[1]);
	if (t <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coin[p] != '\0')
	{
		if (t >= coin[p])
		{
			a = (t / coin[p]);
			c += a;
			t -= coin[p] * a;
		}
		p++;
	}
	printf("%d\n", c);
	return (0);
}
