#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
    int i, tens, ones;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            if (i < 0)
            {
                _putchar('-');
                i = -i;
            }

            if (i > 9)
            {
                tens = i / 10;
                ones = i % 10;
                _putchar(tens + '0');
                _putchar(ones + '0');
            }
            else
            {
                _putchar(i + '0');
            }

            if (i != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            if (i < 0)
            {
                _putchar('-');
                i = -i;
            }

            if (i > 9)
            {
                tens = i / 10;
                ones = i % 10;
                _putchar(tens + '0');
                _putchar(ones + '0');
            }
            else
            {
                _putchar(i + '0');
            }

            if (i != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    _putchar('\n');
}

