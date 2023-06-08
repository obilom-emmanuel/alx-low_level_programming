#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: number.
 * Return: factorial of a number
 */

int factorial(int n)
{
	if (n <= -1)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
