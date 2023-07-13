#include "main.h"
/**
* _puts - Entry point- prints a string
* @s: the string input
*
* Return: returns the length of a string
*/
void _puts(char *s)
{
int x = 0;

while (s[x] != '\0')
{
_putchar(s[x]);
x++;
}
return (0);
_putchar('\n');
}
