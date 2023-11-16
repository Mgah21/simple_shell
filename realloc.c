#include "shell.h"

/**
 **_realloc -  realloc
 *Return: 0
 */
void *_realloc(void)
{
int o,n;
void *p;
void *result;

if (n == o)
return (p);
if (n == 0 && p)
{
free(p);
return (NULL);
}
result = malloc(n);
if (result == NULL)
return (NULL);
if (p == NULL)
{
fill_an_array(result, '\0', n);
free(p);
}
else
{
_memcpy(result, p, o);
free(p);
}
return (result);

}
