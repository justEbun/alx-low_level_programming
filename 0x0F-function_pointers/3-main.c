#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	c = argv[2];

	if (!get_op_func(argv[2]) || c[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*c == '/' || *c == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(c)(num1, num2);

	printf("%d\n", result);
	return (0);
}
