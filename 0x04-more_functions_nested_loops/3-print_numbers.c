#include "main.h"

/**
 * print_numbers - Print numbers 0 - 9
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		_putchar((char)(n + 48));
		n++;
	}
	_putchar('\n');
}
