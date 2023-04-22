#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
		putchar((m % 10) + '0');

	putchar('\n');

	return (0);
}
