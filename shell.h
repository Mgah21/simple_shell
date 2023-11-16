#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdio.h>
#include <errno.h>
int echo(void );
void  exit_fun(void);
#include <stdlib.h>
#include <string.h>
int cd(void);
int env(void);
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/types.h>
int help_fun(void);
int check_char(const char *s,char ch);
#include <signal.h>
#include <linux/limits.h>
#include <sys/stat.h>
char *stringtoken(char *delimiter, const char *string);
#include <signal.h>
#include <unistd.h>
int _putchar(char s);
void _puts(void);
typedef struct  bulltin
{
char *cmd;
int (*fun)(char **line, int er);
} bul_fun;
char *_strncpy(void);
int _atoi(void);
int _strlen(void);
char *_getenv(void);
char *build(void);
int path(void);
int built_fun(void);
int fork(char **arg);
void signal(void);
void read(void);
void exit_bul(  FILE *fd);
void treat_file(FILE *op);
char *_getline();
void hash(void);
int his(void);
void f_env(void);
#endif
