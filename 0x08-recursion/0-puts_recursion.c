#include <stdio.h>
/**
 * _puts_recursion - unction that prints a string
 *@s: input parameter
 *Return: Always 0(success)
 */
void _puts_recursion(char *s)
{
    if (*s)
    {
        _putchar(*s);
        _puts_recursion(s + 1);
    }
    else
    _putchar('\n');
}