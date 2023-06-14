#include "main.h"

/**
 * _islower - show 1 if the input is a lowercases character.
 * Another cases show 0
 *
 * @c: The character in ascii code
 *
 * Return: 1 for lowercases character. 0 for the rest
 */

int _islower(int c)
{

        if (c >= 97 && c <= 122)
        {
                return (1);
        }
        else
        {
                return (0);
        }
        _putchar('\n');
}

