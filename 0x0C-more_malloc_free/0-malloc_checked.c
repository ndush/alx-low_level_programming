#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - a function that allocates memory using malloc
 *@b: input
 *Return: 0
 */
void *malloc_checked(unsigned int b)
{
	iint *m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
