#include "main.h"

/**
 * main -print_alphabet - print a-z in lower case
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
