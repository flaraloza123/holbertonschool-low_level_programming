#include "holberton.h"

/**
 * print_most_numbers - prints 0-9 with the exclusion of 2 & 4
 */
void print_most_numbers(void)
{
int i;

for (i = 48; i < 58; i++)
{
if (i != 50 && i != 52)
_putchar(i);
}
_putchar('\n');
}
