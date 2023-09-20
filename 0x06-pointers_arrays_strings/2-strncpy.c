#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncpy - check the code
 * @dest: destination
 * @src: source
 * @n: len 
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
