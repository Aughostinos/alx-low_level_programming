#include "main.h"

/**
 * jack_bauer - prints very minute of the day of Jack Bauer
 * Return:
*/
void jack_bauer(void)
{
	int hr, min;

	hr = 0;

	while (hr < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hr++;

	}
}

