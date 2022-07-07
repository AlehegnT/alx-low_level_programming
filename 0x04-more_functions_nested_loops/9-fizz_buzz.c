#include <stdio.h>

/**
 * Print 1-100, replace multiples
 *
 * Return: Nothing.
 */
int main(void)
{
int n;
for (n = 1; n < 101; n++)
{
if ((n % 3 == 0) && (n % 5 == 0))
{
printf("FizzBuzz ");
}
else if (n % 3 == 0)
{
printf("Fizz ");
}
else if (n % 5 == 0)
{
if (n < 100)
printf("Buzz ");
else
printf("Buzz");
}
if (!((n % 3 == 0) || (n % 5 == 0)))
{
printf("%d ", n);
}
}
printf("\n");
return (0);
}
