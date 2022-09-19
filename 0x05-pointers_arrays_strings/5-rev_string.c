#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the character value
 * return: 0
 */

void rev_string(char *s)
{
	int len;
	int mid;
	char t;

	for (len =  0; s[len] != '\0'; len++)
		;
	mid = len / 2;

	while (mid--)
	{
		t = s[len - i - 1];
		s[len - i - 1] = s[i];
	 	s[i]= t;
		i++;
	}
}
