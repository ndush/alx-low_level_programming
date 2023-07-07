#include <stdio.h>
/**
 * main - a function that prints the total count of arguments passed
 *@argc:argument count
 *@argv:arguments string
 *Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
