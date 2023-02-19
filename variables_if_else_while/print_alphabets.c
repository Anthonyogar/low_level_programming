#include <stdio.h>
/**
 * main - a program that prints the alphabets in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char f;

char g;


f = 'a';
g = 'A';
while
	(f <= 'z') {
		putchar(f);
		f++;
	}
while
	(g <= 'Z') {
		putchar(g);
		g++;
	}
putchar('\n');
return (0);
}
