#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, followed by a new line
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
	putchar(\'n');
	return (0);
}
