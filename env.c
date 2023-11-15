#include "shell.h"
/**
 * env - environment
 * Return: 0
 */
int env(void)
{
int h, length;
for (h = 0; environ[h] != NULL; h++)
{
length = _strlen(environ[h]);
write(1, environ[h], length);
write(STDOUT_FILENO, "\n", 1);
}
return (0);
}
