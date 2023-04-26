#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @h: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int h)
{
int last_digit = h % 10;
if (last_digit < 0)
last_digit *= -2;
_putchar(last_digit + '0');
return (last_digit);
}
