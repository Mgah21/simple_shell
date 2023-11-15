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
