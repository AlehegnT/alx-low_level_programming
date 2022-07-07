#include "main.h"

/**
 * print_number - Print any number one character at a time
 * @n: Number to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
unsigned int i = n;
if (n < 0)
{
_putchar('-');
i = i * (-1);
}
if (i / 10)
print_number(i / 10);
_putchar((i % 10) + '0');
}
