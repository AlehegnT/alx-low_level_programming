#include <stdio.h>

/**
 * main - 0,_1,_2,_...9
 *
 * Return: 0
 */
int main(void)
{
	int h = '0';

	while (h <= '9')
	{
		putchar(h);
		if (h <= '9')
		{
			putchar(',');
			putchar(' ');
		}
		h++;
	}
	putchar('\n');
	return (0);
}
