#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: size
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
