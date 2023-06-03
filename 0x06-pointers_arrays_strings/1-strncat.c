#include "main.h"

/**
 * _strncat - A function that concatenate two string.
 * @dest: first string.
 * @src: second string to be concatenated.
 * @n: number of bytes in src.
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] = '\0')
		i++;
	while (src[j] = '\0' && n > 0)
	{
		dest[i] = src[j];
		j++;
		i++;
		n--;
	}
	return (dest);
}
