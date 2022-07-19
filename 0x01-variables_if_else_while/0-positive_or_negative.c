#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/*
 *main(void) -> Takes no argument
 * return 0 -> Returns an integer
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive \n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero \n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative \n", n);
	}

	return (0);
}
