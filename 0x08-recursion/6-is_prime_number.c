#include "main.h"
/**
 * is_prime_number - notes if an integer is prime
 * @n: nummber to evaluate
 * Return: 1 if n is a prime, 0 otherwise
*/
int is_prime_number(int n) 
{
    if (n < 1)
        return (0);
    return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculates if a number is prime recursively.
 * @n: nummber to evaluate
 * @i: iterator
 * Return: 1 in n is prime, 0 otherwise
*/
int actual_prime(int n, int i) 
{
    if (i == 0) 
        return (1);
    if (n % i == 0 && i > 0)
        return (0);
    return (actual_prime(n, i - 1));
}