#include "main.h"

/**
 * *_strcpy - copies the string pointed to, to the buffer pointed to
 * @dest: the destination
 * @src: the source
 * return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
