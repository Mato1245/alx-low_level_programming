#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return 1;
else
return 0;
}

/**
 * main - check the _isalpha function
 * Return: Always 0
 */
int main(void)
{
int r;

r = _isalpha('H');
printf("%d\n", r);

return 0;
}

