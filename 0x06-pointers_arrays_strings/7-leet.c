#include "main.h"

/**
 * leet - encodes a string
 * @str: string
 * Return: 0
 */
char *leet(char *str)
{
	int c = 0, i;
	int lower[5] = {97, 101, 111, 116, 108};
	int upper[5] = {65, 69, 79, 84, 76};
	int num[5] = {52, 51, 48, 55, 49};

	while (*(str + c) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + c) == lower[i] || *(str + c) == upper[i])
			{
				*(str + c) = num[i];
				break;
			}
		}
		c++;
	}
	return (str);
}
