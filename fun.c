#include "shell.h"

/**
 * built_fun - builtfun
 * Return: 0 or 1
 */

int built_fun(void)
{
int e,h;
char **comm;
bul_fun bil[] = {
{"cd", cd},
{"env", env},
{"help", help_fun},
{"echo", echo},
{"history", his},
{NULL, NULL}
};
while ((bil + h)->cmd)
{
if (_strcmp(comm[0], (bil + h)->cmd) == 0)
{
return ((bil + h)->fun(comm, e));
}
h++;
}
return (-1);
}


/**
 * fork - fork
 * @argv:string
 * Return: 0 or 1
 */
int fork(char **arg)
{
int stat,h;
pid_t pid;
char **command;
char *in;
if (*command == NULL)
{
return (-1);
}

pid = fork();
if (pid == -1)
{
perror("no such file");
return (-1);
}

if (pid == 0)
{
if (_strncmp(*command, "./", 2) != 0 && _strncmp(*command, "/", 1) != 0)
{
path_cmd(command);
}
if (execve(*command, command, environ) == -1)
{
print_error(command[0], h, arg);
free(in);
free(command);
exit(EXIT_FAILURE);
}
return (EXIT_SUCCESS);
}
wait(&stat);
return (0);
}

#include "shell.h"
/**
 * read - Read
 * Return: -1 or  0
 */

void read(void)
{
FILE *op;
char *line = NULL;
char **argv;
int coun,length = 0;
char *file;
op = fopen(file, "r");
if (op == NULL)
{
exit(EXIT_FAILURE);
}
while ((getline(&line, &length, op)) != -1)
{
coun++;
treat_file(line, coun, op, argv);

}
if (line)
free(line);
fclose(op);
exit(0);
}
