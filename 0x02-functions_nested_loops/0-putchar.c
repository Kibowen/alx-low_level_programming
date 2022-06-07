#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * prints out _putchar followed by a newline.
 *
 * Return: always 0 (Success)
 */

int main(void)
{
char ch[8] = "_putchar";
int m;

for (m = 0; m < 8; m++)
_putchar(ch);

_putchar('\n');

return (0);
}
