#include "main.h"

/**
 * _strcpy - A function that copy string
 * @src: string to be copied.
 * @dest: pointed where string is to be pasted.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < 1 ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
