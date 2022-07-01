#include<stdio.h>

/**
 * main - Print alphabet, lower & upper cases
 *
 * Return: 0
 */
int main(void)
{
	char z = 'a';
	char dz = 'A';

	while (z <= 'z')
	{
		putchar(z);
		z++;
	}
	while (dz <= 'Z')
	{
		putchar(dz);
		dz++;
	}
	putchar('\n');
	return (0);
}
