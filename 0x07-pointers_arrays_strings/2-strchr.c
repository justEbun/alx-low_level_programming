#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer
 * @c: character value
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	for (int i = 0; *s != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
		return (s);
	return (0);
}
