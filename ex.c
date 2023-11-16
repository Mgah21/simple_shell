#include "shell.h"
/**
 * treat_file - treat file
 * @op:Fi
 * Return : null
 */
void treat_file(FILE *op)
{
char **command;
char **arg;
char *l;
int coun;
int m = 0;
command = parse_cmd(l);

if (_strncmp(command[0], "exit", 4) == 0)
{
exit_bul(command, l, op);
}
else if (check_builtin(command) == 0)
{
m = handle_builtin(command, m);
free(command);
}
else
{
m = check_cmd(command, l, coun, arg);
free(command);
}
}

/**
 * exit_bul -  Exit
 * @fd: Description
 * Return : 0
 */
void exit_bul(FILE *fd)
{
int stat, h = 0;
char **command;
char *l;
if (command[1] == NULL)
{
free(l);
free(command);
fclose(fd);
exit(errno);
}
while (command[1][h])
{
if (_isalpha(command [1][h++]) < 0)
{
perror("il");
}
}
stat = _atoi(command[1]);
free(l);
free(command);
fclose(fd);
exit(stat);
}
