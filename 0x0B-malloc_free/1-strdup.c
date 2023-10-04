#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - prints buffer in hexa
 * @str: the address of memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	size_t size;
	char *newStr;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str);

	newStr = (char *)malloc(size + 1);

	if (newStr == NULL)
	{
		return (NULL);
	}

	strcpy(newStr, str);

	return (newStr);

}
