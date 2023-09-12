#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{	
	int num1;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (int num2 = num1 + 1; num2 <= 99; num2++) {
            // Print the first two-digit number
            putchar((num1 / 10) + '0');
            putchar((num1 % 10) + '0');

            // Print a space to separate the numbers
            putchar(' ');

            // Print the second two-digit number
            putchar((num2 / 10) + '0');
            putchar((num2 % 10) + '0');

            // Print ", " after the combination if it's not the last one
            if (num1 != 98 || num2 != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    // Print a newline character to end the output
    putchar('\n');

	return (0);
}
