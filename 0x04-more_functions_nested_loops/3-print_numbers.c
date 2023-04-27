#include "main.h"

/**
*print_numbers - print 0123456789
* owned by Bwave ICT
*Return: void
*/

void print_numbers(void)
{
	char z;

	for (z = '0'; z <= '9'; z++)
	{
	_putchar(z);
	}
	_putchar('\n');
}
