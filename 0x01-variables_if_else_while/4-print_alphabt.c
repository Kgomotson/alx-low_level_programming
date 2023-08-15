#include "stdio.h"
/**
 * main - entry point
 * alpha: input value
 * Return: 0
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
if (alpha == 'e' || alpha == 'q')
{
continue;
}
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
