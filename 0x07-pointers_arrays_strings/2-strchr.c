#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer
 * @c: character value
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	putchar('\n');
}
