#include "main.h"

/**
 *_isupper - checks for uppercase character
 *@c: The character to be checked
 *Return: 1 for uppercase, 0 for the rest
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
