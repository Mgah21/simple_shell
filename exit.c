#include "shell.h"
/**
 * exit_fun - Exit
 * Return: NULL
 */
void  exit_fun(void)
{
int stat = 0;
int h = 0;
int j;
char *in;
char **argv;
char **command;

if (command[1] == NULL)
{
free(in);
free(command);
exit(EXIT_SUCCESS);
}
while (command[1][h])
{
if (_isalpha(command[1][h++]) != 0)
{
_prerror(argv, j, command);
break;
}
else
{
stat = _atoi(command[1]);
free(in);
free(command);
exit(stat);
}
}
}
