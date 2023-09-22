#include "main.h"
#include <stdio.h>
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - memory copy
 *
 * @dest: s
 * @src: b
 * @n: n
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
