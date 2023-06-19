#include <stdio.h>

/**
 * main - Prints numbers from 0-9
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
int num;
while (num < 10)
{
printf("%d", num);
num += 1;
}
printf("\n");
return (0);
}
