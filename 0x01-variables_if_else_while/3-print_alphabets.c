#include "stdio.h"
/**
 * main - entry point
 * alpha: input value
 * ALPHA: input value
 * Return: 0
 */
int main(void)
{
char alpha = 'a';
char ALPHA = 'A';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
while (ALPHA <= 'Z')
{
putchar(ALPHA);
ALPHA++;
}
putchar('\n');
return (0);
}
