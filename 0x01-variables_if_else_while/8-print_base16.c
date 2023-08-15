#include "stdio.h"
/**
 * main - entry point
 * alpha: input value
 * num: input value
 * Return: 0
 */
int main(void)
{
int num = 1;
char alpha;
while (num < 10)
{
putchar(0 + num);
num++;
}
alpha = 'a';
while (alpha < 'g')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
