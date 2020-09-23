#include "holberton.h"

/**
 * print_alphabet_x10 - will print alphabet 10 times
 */
void print_alphabet_x10(void)
{
int l;
char c;

for (l = 0; l < 10; l++)
  {
  for (c = 'a'; c <= 'z'; c++)
    {
    _putchar(c);
    }
  _putchar('\n');
  }
}
