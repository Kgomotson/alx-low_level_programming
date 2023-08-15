#include "stdio.h"
/**
 * main - entry point
 * num: input value
 * Return: 0
 */
int main(void)
{
int num = 0;
while (num < 10)
{
putchar(num + '0');
putchar(',');
putchar(' ');
num++;
}
putchar('\n');
return (0);
}
