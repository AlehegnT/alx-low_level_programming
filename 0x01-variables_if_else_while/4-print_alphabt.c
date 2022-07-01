#include <stdio.h>

/**
 * main - Print lower case alpahabets with out q and e
 *
 * Return 0
 */
int main(void)
{
	char o = 'b';

	while (o <= 's')
	{
		if (o != 'q' && o != 'e')
		{
			putchar(o);
		}
		o++;
	}
	putcahr('\n');
	return (0);
}

