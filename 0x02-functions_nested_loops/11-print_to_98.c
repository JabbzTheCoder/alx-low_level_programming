#include "main.h"
/**
 * print_to_98 - Prints all natural numbers till 98
 * @n - strating n
 *
 */

void print_to_98(int n)
{
	int i, ones, tens, hundreds;
	
	if (n > 98)
	{
		for (i = n ; i >= 98; i--)
		{
			if (i > 100 && <=999)
			{
				hundreds = i / 100;
				tens = (i / 10) % 10;
				ones = i % 10;
				_putchar(hundreds + '0');
			}
			else
			{
				tens = i / 10;
				ones = i % 10;
			}
			_putchar(tens + '0');
			_putchar(ones + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i < 99; i++)
		{
			if (i < 0)
			{
				_putchar('-');
				
				if ((-i) > 9)
				{
					tens = i / 10;
					ones = i % 10;
					_putchar(tens);
					_putchar(ones);
				}
				else
				{
					_putchar(i + '0');
				}

			}
			else
			{
				if (i > 9)
				{
					tens = i / 10;
					ones = i % 10;
					_putchar(tens);
					_putchar(ones);
                                }
                                else
                                {
					_putchar(i);
                                }
			}
			if (i != 98)
                        {
				_putchar(',');
				_putchar(' ');
                        }
		
		}
	}

}
