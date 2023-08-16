#include "main.h"
#include <stdio.h>
/**
 *  print_sign - prints a sign of a number
 * n: input value
 * Return: 0
 */
 int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar(43);
_putchar(',');
_putchar('0' + n);
}
else if (n == 0)
{
return (0);
_putchar(48);
_putchar(',');
_putchar('0' + n);
}
else
{
return (-1);
_putchar(45);
_putchar('0' + n);
}
return (0);
}
