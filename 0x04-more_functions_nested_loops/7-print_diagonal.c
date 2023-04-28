#include "main.h"

/**
 * print_diagonal - printing lines diagonal
 * @n: input variable
 *
 * Return: void
 */


void print_diagonal(int n)
{
	int m, z;

	if (n <= 0)
		_putchar('\n');
	for (m = 0; m < n; m++)
	{
		for (z = 0; z < m; z++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
