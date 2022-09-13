#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
    	char alpha;
        int num = 0;
	while(num <= 9)
       {
	        for (alpha = 'a';alpha <= 'z';alpha++)
		        {
				putchar(alpha);
				putchar('\n');
		        }
		        num++;
	}
}
