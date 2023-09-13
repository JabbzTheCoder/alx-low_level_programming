#include "main.h"

/**
 * times_table - Prints the times table
 *
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (result < 10)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar('\t');
			}
		}
		_putchar('\n');
	}
}
