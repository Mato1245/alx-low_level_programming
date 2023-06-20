#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: The number to extract the last digit from.
 *
 * Return: Value of the last digit of the number.
 */
int print_last_digit(int n)
{
int a;

if (n < 0)
n = -n;

a = n % 10;

_putchar(a + '0');

return (a);
}
