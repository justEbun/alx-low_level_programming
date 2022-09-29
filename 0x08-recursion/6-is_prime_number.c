#include "main.h"

int can_be_divided(int num, int d);
int is_prime_number(int n);

/**
 * can_be_divided - Checks if a number is divisible
 * @num: The number
 * @d: The divisor
 * Return: 0 if divisible and 1 if not
 */

int can_be_divided(int num, int d)
{
	if (num % d == 0)
		return (0);

	if (d == num / 2)
		return (1);

	return (can_be_divided(num, d + 1));
}

/**
 * is_prime_number - return if is a prime number or not
 * @n: The number
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (can_be_divided(n, d));
}
