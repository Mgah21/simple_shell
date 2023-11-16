#include "shell.h"

/**
 * _putchar - putchar
 * @s: argument
 * Return: O
 */

int _putchar(char s)
{
return (write(1, &s, 1));
}
