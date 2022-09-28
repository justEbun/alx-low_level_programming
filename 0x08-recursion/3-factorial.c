#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the integer value
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		int fac;

		fac = n * factorial(n - 1);
		return (fac);
	}
}
