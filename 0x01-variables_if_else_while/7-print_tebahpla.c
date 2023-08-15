#include "stdio.h"
/**
 * main - entry point
 * alpha: input value
 * Return: 0
 */
int main(void)
{
char alpha = 'z';
while (alpha >= 'a')
{
putchar(alpha);
alpha--;
}
putchar('\n');
return (0);
}
