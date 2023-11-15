#include "shell.h"
/**
 * check_char - uses Check for char from string
 * @s:The text to be verified
 * @ch: The character that checks it
 * Return: if Succes 1, elseFailed 0
 */
int check_char(const char *s, char ch)
{

for (int h = 0;  s[h] != '\0'; h++)
{
if (ch == s[h])
return (1);
continue;
}
return (0);
}

/**
 * stringtoken - built string token
 * @delimiter:Split text
 * @string: The text to be split
 * Return:  NULL
 */

char *stringtoken(char *delimiter, const char *string)
{
int h;
char *tok_c;
char *tok_n;

if (string != NULL)
tok_n = string;
tok_c = tok_n;
if (tok_c == NULL)
return (NULL);
for (h = 0; tok_c[h] != '\0'; h++)
{
if (check_char(tok_c[h], delimiter) == 0)
break;
}
if (tok_n[h] == '\0' || tok_n[h] == '#')
{
tok_n = NULL;
return (NULL);
}
tok_c = tok_n + h;
tok_n = tok_c;
for (h = 0; tok_n[h] != '\0'; h++)
{
if (check_char(tok_n[h], delimiter) == 1)
break;
}
if (tok_n[h] == '\0')
tok_n = NULL;
else
{
tok_n[h] = '\0';
tok_n = tok_n + h + 1;
if (*tok_n == '\0')
tok_n = NULL;
}
return (tok_c);
}

