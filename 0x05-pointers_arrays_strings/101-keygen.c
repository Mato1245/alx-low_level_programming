#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point to generate a random valid password
 *
 * Return: 0
 */
int main(void)
{
char password[7];
int i, sum = 0;

srand(time(0));

for (i = 0; i < 7; i++)
{
password[i] = rand() % 94 + 33;  // Generate random ASCII characters from '!' to '~'
sum += password[i];
}

password[7] = '\0';  // Add null terminator to make it a valid C string

printf("%s\n", password);
printf("Sum: %d\n", sum);

return 0;
}
