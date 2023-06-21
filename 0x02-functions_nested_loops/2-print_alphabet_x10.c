#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void);

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
char c;
int i = 0;

while (i <= 9)
{
or (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
i++;
}
}

/**
 * main - entry point of the program
 * Return: 0
 */
int main(void)
{
print_alphabet_x10();

return 0;
}

