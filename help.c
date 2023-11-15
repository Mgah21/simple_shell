#include "shell.h"
/**
 * help_fun - Help
 * Return: 0
 */
int help_fun(void)
{
int file = 1;
int read = 1;
int write = 1;
char **command;
char w;
file = open(command[1], O_RDONLY);
if (file < 0)
{
perror("Error");
return (0);
}
while (read > 0)
{
read = read(file, &w, 1);
write = write(STDOUT_FILENO, &w, read);
if (write < 0)
{
return (-1);
}
}
_putchar('\n');
return (0);
}
