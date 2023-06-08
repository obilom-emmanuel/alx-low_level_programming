#include "main.h"

/**
 * _strlen_recursion - A function that prints the length of a string.
 * @s: the string that it's length is to be printed.
 * Return: string length.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
