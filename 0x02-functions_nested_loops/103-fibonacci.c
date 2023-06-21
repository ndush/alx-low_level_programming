#include <stdio.h>
/**
 *main - print first 50 fibonacci number
 *
 * Return: Return 0
 */
int main(void)
{
	long int f, s, sum, tot;

	sum = 0;
	f = 0;
	s = 1;
	tot = 0;
	while (sum < 4000000)
	{
		sum = f + s;
		if (sum % 2 == 0)
		{
			tot += sum;
		}
		f = s;
		s = sum;
	}
	printf("%ld\n", tot);
	return (0);
}
