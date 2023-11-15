#include "shell.h"
/**
 * cd - CD
 * Return: 0 or 1
 */
int cd(void)
{
int val;
char **command;
char cd[PATH_MAX];
val = -1;
if (command[1] == NULL)
val = chdir(getenv("HOME"));
else if (_strcmp(command[1], "-") == 0)
{
val = chdir(getenv("OLDPWD"));
}
else
val = chdir(command[1]);
if (val == -1)
{
perror("file");
return (-1);
}
else if (val != -1)
{
getcwd(cd, sizeof(cd));
setenv("OLDPWD", getenv("PWD"), 1);
setenv("PWD", cd, 1);
}
return (0);
}
