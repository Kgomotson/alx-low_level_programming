#include "main.h"
#include <stdio.h>
/**
 * print_alphabet- prints alphabets in lowercase
 * char: input value
 * Return: nothing
 */
void print_alphabet(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
