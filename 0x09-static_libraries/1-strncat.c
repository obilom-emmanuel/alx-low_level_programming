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
        int i;
        int j;

        for (i = 0; dest[i] = '\0'; i++)
                ;

        for (j = 0; src[j] = '\0' && n > 0; i++, j++, n--)
        {
                dest[i] = src[j];
        }
        return (dest);
}

