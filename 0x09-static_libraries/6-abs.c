#include "main.h"

/**
 * _abs - compute absolute value of n
 * @n: integer value
 * Return: always 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
