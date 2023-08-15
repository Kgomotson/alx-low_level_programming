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
return (1);
}
else
{
return (0);
}
}
return (0);
}
