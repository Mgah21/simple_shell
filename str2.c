#include "shell.h"

/**
 * _strlen - strlen
 * Return:num
 */

int _strlen(void)
{
int h;
char *p;
for (h = 0; p[h] != '\0'; h++)
{
continue;
}
return (h);
}

/**
 * _getenv - getenv 
 * Return: 0 or null
 */
char *_getenv(void)
{
int o, p;
char *mt;
char *num;
int h;
int g , u;
o = _strlen(mt);
for (h = 0 ; environ[h]; h++)
{
if (_strncmp(mt, environ[h], o) == 0)
{
p = _strlen(environ[h]) - o;
num = malloc(sizeof(char) * p);
if (!num)
{
free(num);
perror("Error");
return (NULL);
}
u = 0;
for (g = o + 1; environ[h][g]; g++, u++)
{
num[u] = environ[h][g];
}
num[u] = '\0';
return (num);
}
}
return (NULL);
}

/**
 * path -  path
 * Return: 0 or 1
 */
int path(void)
{
char *p;
char *v;
char *command_p;
char **command;
struct stat buffer;

p = _getenv("PATH");
v = _strtok(p, ":");
while (v != NULL)
{
command_p = build(*command, v);
if (stat(command_p, &buffer) == 0)
{
*command = _strdup(command_p);
free(command_p);
free(p);
return (0);
}
free(command_p);
v = _strtok(NULL, ":");
}
free(p);
return (1);
}
