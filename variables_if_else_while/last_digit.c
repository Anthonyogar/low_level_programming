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
	int a;

	int c;

	srand(time(0));
	a = rand() - RAND_MAX / 2;

	c = a % 10;
	if (c > 5)
		printf("Last digit of %d is %d and is greater than 5\n", a, c);
	if (c == 0)
		printf("Last digit of %d is %d and is 0\n", a, c);
	if (c < 6 && c != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", a, c);
	return (0);
}
