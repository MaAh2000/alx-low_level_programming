#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
if (c >= 'a')
return (1);
else
if (c <= 'z')
return (0);
}
