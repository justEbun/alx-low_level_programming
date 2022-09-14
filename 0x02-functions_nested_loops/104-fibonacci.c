#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int _fibonacci(int i)
{
	int l = 0;

	if (!i)
	{
		return (1);
	}

	while (i)
	{
		i /= 10;
		l += 1;
	}
	return(l);
}

int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, f1o = 0, f2o = 0, tmpo = 0;
	short int n = 1, in;

	while (n <= 98)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		in = _fibonacci(mx) - 1 - _fibonacci(f1);
		while (f1o > 0 && in > 0)
		{
			printf("%d", 0);
			in--;
		}
		printf("%lu",fl);

		tmp = (f1 + f2) % mx;
		tmpo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = tmp;
		f2o = tmpo;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
