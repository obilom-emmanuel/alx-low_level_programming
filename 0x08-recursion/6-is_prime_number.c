#include <stdio.h>

/**
 *  is_prime_number - A function that prints a prime number.
 *  @n: Prime number to be printed.
 *  Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	int d;

	for (d = 2; d < n; d++)
	{
		if (n % d == 0)
		{
			return (0);
		}
		else if (n / 1 == n && n / n == 1)
		{
			return (1);
		}
	}
}
