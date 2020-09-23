#include "holberton.h"

/**
 * print_sign - prints the sign of integer n
 * @n: integer
 * Return: 0 for zero, -1 if negative, 1 if positive
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
