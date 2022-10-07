#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number
 * @size: size
 * Return: s
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	int len;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = size * nmemb;
	s = len;

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = '\0';

	return (s);
}
