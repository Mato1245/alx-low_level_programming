#include <stdio.h>

/**
 * main - Program that prints all possible different combinations
 *        of four digits.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i, j, k, l;

for (i = 0; i <= 9; i++)
{
for (j = i + 1; j <= 9; j++)
{
for (k = j + 1; k <= 9; k++)
{
for (l = k + 1; l <= 9; l++)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
putchar(l + '0');

if (!(i == 9 && j == 8 && k == 7 && l == 6))
{
putchar(',');
putchar(' ');
}
}
}
}
}

putchar('\n');
return (0);
}
