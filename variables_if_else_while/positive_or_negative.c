#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b;

	srand(time(0));
	b = rand() - RAND_MAX / 2;

	if (b > 0)
		printf("%d is positive\n", b);
	else if (b == 0)
		printf("%d is zero\n", b);
	else
		printf("%d is negaative\n", b);
	return (0);
}
