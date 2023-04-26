#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int m, t, d;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');

		for (t = 1; t <= 9; t++)
		{
			_putchar(',');
			_putchar(' ');

			d = m * t;

			if (d <= 9)
				_putchar(' ');
			else
				_putchar((d / 10) + '0');

			_putchar((d % 10) + '0');
		}
		_putchar('\n');
	}
}
