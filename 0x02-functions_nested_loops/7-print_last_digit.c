#include "holberton.h"
/**
 * _abs - returns absolute value of n
 * @n: integer
 * Return: returns n if positive, -n if negative
 */
int _abs(int n)
{
if (n > 0)
return (n);
else if (n == 0)
return (0);
else
return (-n);
}

/**
 * print_last_digit - prints the last digit of n
 * @n: integer to be tested
 * Return: last digit of n
 */
int print_last_digit(int n)
{
int lastDigit;

lastDigit = _abs((n % 10));
_putchar(lastDigit + 48);
return (lastDigit);
}
