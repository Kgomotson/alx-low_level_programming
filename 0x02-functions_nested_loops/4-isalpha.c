#include "main.h"
#include <stdio.h>
/**
 * _isalpha - checks for lowercase characters
 * alpha: input value
 * ALPHA: input value
 * Return: 0
 */
int _isalpha(int c)
{
char alpha = 'a', ALPHA = 'A';
while (alpha <= 'z' || ALPHA <= 'Z')
{
if (c == alpha || c == ALPHA)
{
_putchar('0' + 1);
}
else
{
_putchar('0' + 0);
}
alpha++;
ALPHA++;
}
return (0);
}
