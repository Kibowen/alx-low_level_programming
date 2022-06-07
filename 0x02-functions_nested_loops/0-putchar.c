#include "main.h"
/**
 * main - prints out _putchar followed by a newline.
 * return: always (0) success
 */

int main()
{
    char ch[8]= "_putchar";
    int m;
    
    for(m = 0; m < 8; m++)
        putchar(ch);

    return (0);
}
