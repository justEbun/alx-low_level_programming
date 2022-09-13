#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
    	char c; 
        int num = 0;
	while(num <= 9)
       {
	        for (c = 'a';c <= 'z';c++)
		        {
				_putchar(c);
		        }
		        num++;
			_putchar('\n');
	}
	return (0);
}
