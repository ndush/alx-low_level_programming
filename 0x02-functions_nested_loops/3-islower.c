#include <stdio.h>
#include "main.h"
/**
 * _islower - Prints 1 if the input is a lowercase, else 0
 *
 * @c: Uses the ASCII code
 *
 * Return: 1 for lowercase. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
