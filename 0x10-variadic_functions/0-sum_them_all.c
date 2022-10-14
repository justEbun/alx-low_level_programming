#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list m;
	unsigned int i, s = 0;

	va_start(m, n);

	for (i = 0; i < n; i++)
		s += va_arg(m, int);

	va_end(m);

	return (s);
}
