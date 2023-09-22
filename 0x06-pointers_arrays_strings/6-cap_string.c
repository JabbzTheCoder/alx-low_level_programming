#include "main.h"
#include <stdio.h>
/**
 * cap_string - check the code
 *@str: string
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i, j;
	char c;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];

		if (i == 0 && c >= 'a' && c <= 'z')
		{
			str[i] -= 32;
		}
		else
		{
			for (j = 0; separators[j] != '\0'; j++)
			{
				if (c == separators[j])
				{
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					{
						str[i + 1] -= 32;
					}
				}
			}
		}
	}
	return (str);
}
