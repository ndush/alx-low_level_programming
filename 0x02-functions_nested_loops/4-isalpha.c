#include <stdio.h>
#include "main.h"
/**
 * _isalpha -  prints 1 if the input is an
 * alphabet otherwise it prints 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for alphabet, 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
