#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the integer value
 * @y: the integer value
 * Return: pow
 */

int _pow_recursion(int x, int y)
{
	int pow = 0;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		pow = x * _pow_recursion(x, y - 1);
		return (pow);
	}
}
