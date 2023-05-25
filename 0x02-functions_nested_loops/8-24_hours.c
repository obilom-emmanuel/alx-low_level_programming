#include "main.h"

/**
 * jack_bauer - A function that prints every minutes of the
 * day starting from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar(':');
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar('\n');
		}
	}
}

