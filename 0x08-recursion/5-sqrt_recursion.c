#include <stdio.h>

/**
 * _sqrt_recursion_helper - Used for binary search calculatio.
 * _sqrt_recursion - A function that prints
 * the natural square root of a number.
 * @start: beginning of the search.
 * @end: end of the search.
 * @n: A number that it's natural square root should be printed.
 * Return: -1 If n does not have a natural square root.
 */

int _sqrt_recursion_helper(n, start, end)
{
	if (start > end)
	{
		return (-1);
	}

	mid = (end - start) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (suare > n)
	{
		return (_sqrt_recursion_helper(n, start, mid - 1));
	}
	else
	{
		return (_sqrt_recursion_helper(n, end, mid = 1));
	}
}

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 0, n));
}
