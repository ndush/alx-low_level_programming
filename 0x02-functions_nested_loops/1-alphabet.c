#include <stdio.h>
#include "main.h"

/**
 * Description: 'print the alphabet in lower case' 
 * Return:Always 0 (Success)
 */
void print_alphabet(void)
{
	char i;
	for(i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
