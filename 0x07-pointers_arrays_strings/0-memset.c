#include "main.h"

/**
 * _memset - A function that fill a memory block with a constant byte
 * @s: pointer to the number of memory.
 * @n: number of memory.
 * @b: constant byte to be filled in the memory.
 * Return: a pointer to @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
