#include "main.h"
#include <stdio.h>
/**
 * _islower - checks for lowercase characters
 * alpha: input value
 * ALPHA: input value
 * Return: 0
 */
int _isalpha(int c)
{
char alpha = 'a', ALPHA = 'A';
while (alpha <= 'z' || ALPHA <= 'Z')
{
if (c ==  alpha || c == ALPHA)
{
return (49);
}
else
{
return (48);
}
}
return (0);
}
