#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for digits
 * @c: input value
 * NUM: input value
 * Return: Always 0.
 */
int  _isdigit(int c)
{
char NUM = 0;
while (NUM <= 9)
{
if (c == NUM)
{
return (1);
}
else
{
return (0);
}
NUM++;
}
return (0);
}
