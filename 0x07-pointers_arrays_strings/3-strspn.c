#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	for (int i = 0; accept[i] != '\0'; i++)
	{
		for (int j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				count += 1;
				break;
			}
			else if (accept[i + 1] == '\0'
					return (count);

		}
	}
	return (count);
}
