#include <stdio.h>

/**
 * main - two digits
 *
 * Return: 0
 */
int main(void)
{
	int c = '0';
	int d = '0';

	while (c <= '9')
	{
		d = '0';
		while (d <= '9')
		{
			putchar(c);
			putchar(d);
			if (d == '9' && c == '9')
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			d++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
