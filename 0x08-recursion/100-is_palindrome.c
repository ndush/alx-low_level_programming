#include "main.h"

int check_pal(char *s, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome -function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: the string
 * Return: 1 if a string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int l;

	l = check_pal(s,o);
	return (_strlen_recursion(s, l));
	
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: length of the string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the characters recursively for palindrome
 * @s: the string to check
 * @i: iterates
 * @len: the length of the string
 * Return: 1 if palindrome is found, 0 otherwise
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
