#include "holbeton.c"

/**
 * _isalpha - checks to see if c is a letter
 * @c: string
 * Return: 1 if c is a letter, 0 if not
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
