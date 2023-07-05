#include "main.h"
/**
 * _strlen_recursion -function that returns the length of a string.
 * @s: the string to be measured
 * Return: the length of the string
 */
int strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += strlen_recursion(s + 1);
	}
	return (len);
}
