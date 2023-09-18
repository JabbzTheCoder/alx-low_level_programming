#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int left = 0;
	int right = length - 1;

	while (left < right)
	{
		char temp = s[left];

		s[left] = s[right];
		s[right] = temp;

		left++;
		right--;
	}
}
