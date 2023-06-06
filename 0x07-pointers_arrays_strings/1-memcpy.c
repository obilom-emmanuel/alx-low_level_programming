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
	char *emmy;

	emmy = dest;
	while (n > 0)
	{
		*src = *dest;
		dest++;
		src++;
		n--;
	}
	return (emmy);
}
