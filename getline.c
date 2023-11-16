#include "shell.h"

/**
 * _getline - getline
 * Return: 0
 */
char *_getline()
{
int h, buffer = BUFSIZE, r;
char w = 0;
char *buffing = malloc(buffer);

if (buffing == NULL)
{
free(buffing);
return (NULL);
}

for (h = 0; w != EOF && w != '\n'; h++)
{
fflush(stdin);
r = read(STDIN_FILENO, &w, 1);
if (r == 0)
{
free(buff);
exit(EXIT_SUCCESS);
}
buffing[h] = w;
if (buffing[0] == '\n')
{
free(buffing);
return ("\0");
}
if (h >= buffsize)
{
buffing = _realloc(buff, buffsize, buffsize + 1);
if (buffing== NULL)

return (NULL);
}
}
}
buffing[i] = '\0';
hash(buffing);
return (buffing);
}
