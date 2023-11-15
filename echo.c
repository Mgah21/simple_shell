#include "shell.h"
/**
  * echo -  Echo
 * Return: 0  
  */
int echo(void )
{
int k;
char *p;
char **command;
unsigned int  par = getppid();
if (_strncmp(command[1], "$?", 2) == 0)
{
print_number_in(k);
PRINTER("\n");
}
else if (_strncmp(command[1], "$$", 2) == 0)
{
print_number(par);
PRINTER("\n");
}
else if (_strncmp(command[1], "$PATH", 5) == 0)
{
p = _getenv("PATH");
PRINTER(p);
PRINTER("\n");
free(p);
}
else
return (print_echo(command));
return (1);
}
