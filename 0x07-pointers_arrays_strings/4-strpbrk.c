#include "main.h"

/**
 * *_strpbrk - searches for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: the rest of s
 */

char *_strpbrk(char *s, char *accept)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		for (int j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	_putchar('\n');
}
