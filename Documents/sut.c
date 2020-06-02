#include "shell.h"

/**
 *_st - function that compares two strings
 *@s1: string 1
 *@s2: string 2
 *
 *Return:  int
*/


int sut(char *line, char *sal)
{

int j;
char *r1;
char *r2;
r1 = line;
r2 = sal;

while (*r1 != '\0' && *r2 != '\0' && *r1 == *r2)
{
r1++;
r2++;
}
j = *r1 - *r2;
return (j);
}
