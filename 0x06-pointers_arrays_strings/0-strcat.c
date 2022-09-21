#include "main.h"
#include <string.h>

/**
 * *_strcat - appends the src string to the dest string, overwriting the terminating null byte at the end of dest, and then adds a terminating null bytes
 * @*dest: the destination
 * @*src: the source
 * Returns: returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

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
