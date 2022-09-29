#include "main.h"

int _sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * _sqrt -finds the square root
 * @num: The number
 * @root: The root
 * Return: root if whole and -1 if not
 */

int _sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);
	return (_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number
 * Return: root or -1 if not a natural square root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, root));
}
