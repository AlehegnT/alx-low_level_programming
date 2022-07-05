#include "main.h"

/**
 * print_alphabet_x10 - - Print lower case alphabet a-z 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int d, l;

	d = 0;
	while (d < 10)
	{
		l = 'a';
			while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		d++;
	}
}
