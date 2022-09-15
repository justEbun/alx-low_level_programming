#include "main.h"

/**
 * main - to execute the fizz buzz test
 * return: 0
 */

int main(void)
{
	int n = 0;

	do {
		if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", n);
		}
	} while (n <= 100);
}
