#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int m;
char z;

for (m = 0; m < 10; m++)
putchar((m % 10) + '0');
for  (z = 'a'; z <= 'f'; z++)
putchar(z);
putchar('\n');
return (0);
}
