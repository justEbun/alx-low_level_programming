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
	void *s;
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = size * nmemb;

	if (s == NULL)
		return (NULL);
	m = s;

	for (i = 0; i < size * nmemb; i++)
		m[i] = '\0';

	return (s);
}
