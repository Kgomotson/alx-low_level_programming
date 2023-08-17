#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase
 * @c: input value
 * ALPHA: input value
 * Return: Always 0.
 */
int _isupper(int c)
{
char ALPHA = 'A';
while (ALPHA <= 'Z')
{
if (c == ALPHA)
{
return (1);
}
else
{
return (0);
}
ALPHA++;
}
return (0);
}
