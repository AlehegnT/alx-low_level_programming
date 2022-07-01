#include<stdio.h>

/**
 * main - print alphabet lowercase in reverse
 *
 * Return: 0
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
