#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline.
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
	}

	_putchar('\n');
}
