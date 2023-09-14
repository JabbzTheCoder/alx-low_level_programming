/**
 * largest_number - finds the largest of three numbers
 * @a: the first number
 * @b: the second number
 * @c: the third number
 *
 * Return: the largest number
 */
int largest_number(int a, int b, int c)
{
	int largest = a;

	if (b > largest)
	{
		largest = b;
	}

	if (c > largest)
	{
		largest = c;
	}

	return (largest);
}
