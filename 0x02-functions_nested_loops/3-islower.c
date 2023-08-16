#include "main.h"
#include <stdio.h>
/**
 * _islower - checks for lowercase characters
 * alpha: input value
 * Return: 0
 */
int _islower(int c)
{
char alpha = 'a';
while (alpha <= 'z')
{
if (c ==  alpha)
{
_putchar(1);
}
else
{
_putchar(0);
}
alpha++;
}
return (0);
}
