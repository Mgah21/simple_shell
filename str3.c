#include "shell.h"

/**
 * _atoi - atoi
 * Return:num
 */
int _atoi(void)
{
int c;
int d;
int e;
int f;
char *st;
c = e = 0;
f = 1;
while ((st[c] < '0' || st[c] > '9') && (st[c] != '\0'))
{
if (st[c] == '-')
f *= -1;
c++;
}
d = c;
while ((st[d] >= '0') && (st[d] <= '9'))
{
e = (e * 10) + f * ((st[d]) - '0');
d++;
}
return (e);
}

/**
 * build - build
 * Return: 0 or null
 */
char *build(void)
{
char *command;
int length;
char *num;
char *tok;
length = _strlen(num) + _strlen(tok) + 2;
command = malloc(sizeof(char) * length);
if (command == NULL)
{
return (NULL);
}
memset(command, 0, length);
command = _strcat(command, num);
command = _strcat(command, "/");
command = _strcat(command, tok);
return (command);
}
