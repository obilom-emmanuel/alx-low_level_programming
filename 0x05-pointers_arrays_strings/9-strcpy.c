#include "main.h"

/**
 * _strcpy - A function that copy string
 * @src: string to be copied.
 * @dest: pointed where string is to be pasted.
 * Return: 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
