#include "main.h"
#include <stdio.h>

/**
 * leet - check the code for
 * @str: string
 * Return: Always 0.
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char c;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (str[i])
	{
		c = str[i];
		j = 0;

		while (s1[j])
		{
			if (c == s1[j])
			{
				str[i] = s2[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
