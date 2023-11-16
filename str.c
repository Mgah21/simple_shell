#include "shell.h"
/**
 * _strncpy - strncpy
 * Return:Null
 */

char *_strncpy(void)
{
char *s;
int h,g;
char *d;
h = 0;
while (h < g && *(s + h))
{
*(d + h) = *(s + h);
h++;
}
while (h < g)
{
*(d + h) = '\0';
h++;
}
return (d);
}

/**
 * _puts - puts
 * return:null
 */
void _puts(void)
{
int h;
char *s;
for (h = 0; s[h] != '\0'; h++)
{
_putchar(s[h]);
}
_putchar('\n');
return;
}
/**
 * signal - signal
 * Return: null
   */
void signal(void)
{
int signal;
if (signal == SIGINT)
{
PRINTER("\n$ ");
}
}
