#include "shell.h"
/**
 * his - his
 * Return: -1 Fail 0 Succes
 */
int his(void)
{
char *file = ".alx_shell_his";
ssize_t yd, w;
int length = 0;
char *in;
if (!file)
return (-1);
yd = open(file, O_CREAT | O_RDWR | O_APPEND, 00600);
if (yd < 0)
return (-1);
if (in)
{
while (in[length])
length++;
w = write(yd, in, length);
if (w < 0)
return (-1);
}
return (1);
}

/**
 * f_env - F_env
 * Return: null
 */
void f_env(void)
{
int h;
char **envir;
for (h = 0; envir[h]; h++)
{
free(env[h]);
}
}
