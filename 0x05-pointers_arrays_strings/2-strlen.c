#include "main.h"
/**
 * _strlen - check the code
 * @s: the string pointer
 *
 * Return: the length of a string
 */

int  _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
