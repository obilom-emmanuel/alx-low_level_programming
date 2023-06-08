#include "main.h"

/**
 * _pow_recursion - A function that returns raised to power.
 * @x: the number to be raised.
 * @y: number to which x is raised.
 * Return: -1 if y is 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if ((y % 2) == 0)
	{
		return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
