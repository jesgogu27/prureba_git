#include "holberton.h"

/**
 *_strcmp - function that compares two strings
 *@s1: string 1
 *@s2: string 2
 *
 *Return:  int
*/


int _strcmp(char *s1, char *s2)
{

int j;
char *r1;
char *r2;
r1 = s1;
r2 = s2;

while (*r1 != '\0' && *r2 != '\0' && *r1 == *r2)
{
r1++;
r2++;
}
j = *r1 - *r2;
return (j);
}
