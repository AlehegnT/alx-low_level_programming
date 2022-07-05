#include "main.h"

/**
 * print_last_digit - print last digit of an integer
 * @d: the integer to print the last digit of
 *
 * Return: Value of last digit
 */
int print_last_digit(int d)
{
int e;
e = (d % 10);
if (e < 0)
{
e = e * -1;
_putchar((char)(e + 48));
}
else
{
_putchar((char)(e + 48));
}
return (e);
}
