#include "main.h"

/**
 * print_array - A program that prints an array.
 * @a: array variable to be printed.
 * @n: number of array element to be printed.
 * Return: a and n inputs.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
