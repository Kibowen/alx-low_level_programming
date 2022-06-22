#include "main.h"

/**
 * _puts_recursion - function that prints a string 
 * 
 * @s: is a charcter string
 * 
 * Return: void
 */

void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        putchar('\n');
        return 0;
    }
    putchar(*s);
    _puts_recursion(s+1);
}
