#include "main.h"
/**
 * puts2 - Print only the first of two cha
 * The input to print from
 *
 * Return: No
 */
void puts2(char *str)
{
	int i;
	i = 0;

	while (*(str + i) != 0)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}_putchar('\n');
}
