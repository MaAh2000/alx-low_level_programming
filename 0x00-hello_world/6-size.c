#include <stdio.h>

/**
 * main - a program that prints the size of various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
printf("Size of a char: %zu byte(s)\n", sizeof(d));
printf("Size of an int: %zu byte(s)\n", sizeof(a));
printf("Size of a long int: %zu byte(s)\n", sizeof(b));
printf("Size of a long long int: %zu byte(s)\n", sizeof(c));
printf("Size of a float: %zu byte(s)\n", sizeof(f));
return (0);
}

