#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int result;

		result = a * b;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
