#include "main.h"

/*
 *
 * _islower - Write a function that checks for lowercase character.
 * @c: Letter to check case of
 *
 * Return: Return 1 if lower, Return 0 if not lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return(1);
	else
		return(0);
}
