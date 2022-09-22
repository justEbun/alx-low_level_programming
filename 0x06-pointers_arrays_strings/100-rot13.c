#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string
 * Return: 0
 */

char *rot13(char *str)
{
	int i1, i2;
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rot13[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	while (str[i1])
	{
		for (i2 = 0; i2 < 52; i2++)
		{
			if (str[i1] == alpha[i2])
			{
				str[i1] = rot13[i2];
				break;
			}
		}
		i1++;
	}
	return (str);
}
