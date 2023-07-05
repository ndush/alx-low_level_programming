#include "main.h"
/**
 * int _pow_recursion - function that returns the value of x raised to the power of y
 * @y:power
 * @x:value to raise
 * Return: result of the power
 */
int _pow_recursion(int y, int x)
{
    if (y < 0)
        return (-1);
    if (y == 0)
        return (1);
    return (x * _pow_recursion(x, y-1));
}