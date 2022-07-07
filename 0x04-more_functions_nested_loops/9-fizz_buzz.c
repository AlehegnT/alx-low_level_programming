#include <stdio.h>

/**
 * Print 1-100, replace multiples
 *
 * Return: 0
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
			printf(" ");
		else if (n % 3 == 0)
			printf("Fizz");
			printf(" ");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n != 100)
			printf(" ");
		n++;
	}
	printf("\n");
	return (0);
}
