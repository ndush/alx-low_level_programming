#include<stdlib.h>
#include "main.h"

/**
 *mallo_checked - allocates memory using malloc
 *@b: number of bytes to allocate
 *Return: a pointer to allocated memory
 */
void *mallo_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
