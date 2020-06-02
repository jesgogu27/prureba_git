#ifndef SHELL_H
#define SHELL_H
/*Shell.h*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>


int fexit(char *buffer);
int _exec(char **token);
char **_split_string(char *line);


#endif
