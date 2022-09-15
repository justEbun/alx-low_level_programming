#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * @c: the integer value
 * Return: 0 if true and 1 if not
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
