#include <stdio.h>

/**
 * main - hexadecimal
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	char b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
