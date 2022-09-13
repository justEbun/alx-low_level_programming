#include "main.h"

/**
 * print_times_table - prints time table
 * @n: the integer value
 * Return:0
 */

void print_times_table(void)
{
	int a, b, c;

	if (n > 0 && n < 15)
	{
		for (x = 0; x <= n; x++)
		{
			for(y = 0; y <= n; y++)
			{
				c = a * b;
				if (c > 99)
				{7
					_putchar(',');
					_putchar(32);
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
				else if (c > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
				else
				{
					if (b != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(c + '0');
				}
			}
			_putchar('\n');
		}
	}
