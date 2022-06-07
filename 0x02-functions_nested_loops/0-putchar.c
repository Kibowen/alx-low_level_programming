#include "main.h"
/**
 * main - prints out _putchar followed by a newline.
 * return: always (0) success
 */

int main(void)
{
    char ch[8] = "_putchar";
    int m;

    for(m = 0; m < 8; m++)
        _putchar(ch);

    _putchar(\n);

    return (0);
}
