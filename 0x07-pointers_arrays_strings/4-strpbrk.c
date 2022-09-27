#include "main.h"

/**
 * *_strpbrk - searches for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: the rest of s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (int i = 0; accept[i] != '\0'; i++)
		{
			if (s[i] == accept[i])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
