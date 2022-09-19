#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the character value
 * return: 0
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int mid = len / 2;
	char t;

	for (int i = 0; i < mid; i++)
	{
		t = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = t;
	}
}
