#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
 * alpha: input value
 * num: input value
 * Return: nothing
 */
void print_alphabet_x10(void)
{
char alpha;
int  num = 0;
while (num <= 10)
{
alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
num++;
_putchar('\n');
}
}
