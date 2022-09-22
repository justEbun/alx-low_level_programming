#include "main.h"

/**
 * *_strncat - concatenates two string
 * @dest: the destination
 * @src: the source
 * @n: the integer value
 * Return: the destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
