#include "main.h"

/**
 * _isalpha - to check if c is a letter
 *
 * Return: 1 if true, 0 if not
 */

int _isalpha(int c);
{
	int a, b;

	for (a = 'a', b ='A'; a <= 'z', b = 'Z'; a++, b++)
	{
		if ( c == a || c == b)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
