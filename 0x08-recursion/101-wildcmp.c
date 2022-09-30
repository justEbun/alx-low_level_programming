#include "main.h"

int strlen(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen - length of a string
 * @str: The string
 * Return: The length
 */

int strlen(char *str)
{
	int len = 0, i = 0;

	if (*(str + i))
	{
		if (*str != '*')
			len++;
		i++;
		len += strlen(str + i);
	}
	return (len);
}

/**
 * iterate_wild - Iterates through a string
 * @wildstr: The string
 */

void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - Checks if a string str matches
 * @str: The string
 * @postfix: The postfix
 * Return: if str and postfix are identical
 */

char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen(str) - 1;
	int postfix_len = strlen(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}

/**
 * wildcmp - compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
