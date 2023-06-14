#include "main.h"

/**
 * _strlen - A program that returns the length of a string
 * @s: string to be returned
 *
 * Return: strlen.
 */

int _strlen(char *s)
{
        int c = 0;

        while (*s != '\0')
        {
                c++;
                s++;
        }
        return (c);
}

