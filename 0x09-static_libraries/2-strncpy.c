#include "main.h"

/**
 * _strncpy - A program that copy a string.
 * @dest: pointer to receive string.
 * @src: string to be copied.
 * @n: numbers of string in src.
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
        int i;

        for (i = 0; i < n && src[i] != '\0'; i++)
        {
                dest[i] = src[i];
        }
        for (; n > i; i++)
        {
                dest[i] = '\0';
        }
        return (dest);
}

