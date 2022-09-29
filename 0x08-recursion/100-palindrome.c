#include "main.h"

int _strlen(char *s);
int _pali(char *s, int len, int i);
int is_palindrome(char *s);

/**
 * strlen - Returns the length of a string
 * @s: The string
 * Return: The length
 */

int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen(s + len);
	}
	return (len);
}

/**
 * _pali - Checks if a string is a palindrome
 * @s: The string
 * @len: The length
 * @i: the index
 * Return: 1 if true and 0 if false
 */

int _pali(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i - 1])
		return (_pali(s, len, i + 1));
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string
 * Return: 1 if true and 0 if false
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen(s);

	if (!(*s))
		return (1);
	return (_pali(s, len, i));
}
