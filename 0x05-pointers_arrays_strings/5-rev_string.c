#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the character value
 * return: 0
 */

void rev_string(char *s)
{
	int len, i;
	int mid;
	char t;

	for (len =  0; s[len] != '\0'; len++)
		;
	mid = len / 2;
	i = 0;

	while (mid--)
	{
		t = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = t;
		i++;
	}
}
