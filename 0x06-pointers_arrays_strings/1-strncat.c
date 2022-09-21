#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: the destination
 * @src: the source
 * &n: the integer value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
