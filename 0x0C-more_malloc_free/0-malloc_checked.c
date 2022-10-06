#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: value
 * Return: s
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	return (s);
}
