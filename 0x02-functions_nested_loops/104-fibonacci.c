#include <stdio.h>

/**
 *main - Print firat 50 Fibonacci numbers
 *
 * Return: Return 0
 */
int main(void)
{
	Long int f, s, c, sum, halfaf, halfbf, halfas, halfbs;
	long int printfhalf, printshalf;

	sum = 0;
	f = 0;
	s = 1;
	for ( c =0; c < 91; c++)
	{
		sum = f+s;
		printf("%ld", sum);
		if (c != 97)
			printf(", ");
		f = s;
		s = sum;
	}
	halfaf = f / 1000000000;
	halfbf = f % 1000000000;
	halfas = s / 1000000000;
	halfbs = s % 1000000000;
	while (s < 98)
	{
		printfhalf = halfaf + halfas;
		printshalf = halfbf + halfbs;
		if (printshalf >= 1000000000)
		{
			printshalf %= 1000000000;
			printfhalf++;
		}
		printf("%ld%ld", printfhalf, printshalf);
		if (c == 97)
			break
		printf(", ");
		halfaf = halfas;
		halfbf = halfbs;
		halfas = printhalf;
		halfbs = printshalf;
		c++
	}
	printf("\n");
	return (0);
}
