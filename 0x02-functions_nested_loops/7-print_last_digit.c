#include "main.h"

/**
 * print_last_digit - write last digit
 * @n: integer
 * Return: value
 */
int print_last_digit(int n)
{
	if ((n % 10) < 0)
		n *= -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
