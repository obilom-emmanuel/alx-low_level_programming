#include "main.h"

/**
 * swap_int - A program that swao integers.
 * @a: first integer to be swapped.
 * @b: second integer to be swapped.
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
