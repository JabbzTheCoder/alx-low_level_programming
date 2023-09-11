#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 8; i++)
	{
		int j;

		for (j = i + 1; j < 9; j++)
		{
			int k;

			for (k = j + 1; k < 10; k++)
			{
				int number = i * 100 + j * 10 + k;

				putchar((number / 100) + '0');
				putchar(((number / 10) % 10) + '0');
				putchar((number % 10) + '0');

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
