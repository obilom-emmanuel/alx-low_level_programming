#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: - The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set apprropriately.
 */
int _putchar(char c)
{
	return (write(i, &c, 1));
}
