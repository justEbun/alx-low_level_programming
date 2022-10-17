#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints all
 * @format: format
 * @...: ellipsis
 */

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);
	int i = 0;
	const char *str;

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c\n", va_arg(args, int));
				break;
			case 'i':
				printf("%d\n", va_arg(args, int));
				break;
			case 'f':
				printf("%f\n", va_arg(args, double));
				break;
			case 's':
				str = (va_arg(args, const char *));
				if (str == NULL)
					printf("nil");
				 printf("%s", str);
		}
		i++;
	}
}
