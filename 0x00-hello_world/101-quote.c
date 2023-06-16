#include<stdio.h>
#include<unistd.h>

/**
 *main - run all functions
 *
 *Description: Change standard error message
 *Return:return 1 and exit
 */
int main(void)
{
	int l;
	
       l=
	sizeof("and that piece of art is useful - Dora Korpa, 2015-10-19");

	write(2,
	"and that piece of art is useful - Dora Korpa, 2015-10-19\n", l);
	return(1)
}
