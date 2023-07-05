#include "main.h"
/**
 * _strlen_recursion -function that returns the length of a string.
 * @s: the string to be measured
 * Return: the length of the string
 */
int _strlen_recursion(const char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += strlen(s + 1);
	}
}
