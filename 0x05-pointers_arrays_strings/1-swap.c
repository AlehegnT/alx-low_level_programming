/**
 * swap_int - Swap the value of two ints
 * @a: 1st pointer to variable to swap
 * @b: 2nd pointer to variable to swap
 *
 * Return: no
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
