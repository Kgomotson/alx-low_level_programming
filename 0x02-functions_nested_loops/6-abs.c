#include "main.h"
#include <stdio.h>
/**
 * _abs - function printing absolue num
 * @n: input value
 * Return: 0
 */
int _abs(int n)
{
if (n < 0)
{
return -(n);
}
else
{
_putchar(n);
}
return (0);
}
