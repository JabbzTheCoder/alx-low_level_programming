#include "main.h"
#include <stdio.h>
#include <stdio.h>
#include <string.h>
/**
 * _memset - memory set
 *
 * @s : s
 * @b: b
 * @n: n
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
