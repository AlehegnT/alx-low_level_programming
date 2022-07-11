#include "main.h"

/**
 * rint_rev - Print a string in rev
 * @s: String to print
 *
 * Return: no
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
	{
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
