#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - main block
 * Description - prints if random generated number is +tive, zero or-tive
 * Return:Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is poditive \n", n);
	else if (n == 0)
		 printf("%d is negative \n", n);
	else
		printf("%d is zero \n", n);
	return (0);
}


