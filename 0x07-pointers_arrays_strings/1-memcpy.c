#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @src: memory area where bytes are to be copied from.
 * @dest: memory area where bytes are to be copied to.
 * @n: number of bytes.
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
