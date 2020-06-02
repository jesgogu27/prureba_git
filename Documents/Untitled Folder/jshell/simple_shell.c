#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"
#define  MAX_WORLD 10
#define  MAX_CHAR 100

int main()
{
char *buffer, *sal = "exit";
size_t bufsize = 32;

int comp;
   
buffer = (char *)malloc(bufsize * sizeof(char));
if( buffer == NULL)
{
perror("Unable to allocate buffer");
exit(1);    
}
printf("$ ");
while(getline(&buffer,&bufsize, stdin))
{
comp=(strncmp(buffer, sal, 4));
if(comp == 0)
{
free(buffer);
exit(EXIT_SUCCESS);
}
else
{
printf("%s",buffer);
printf("$");
}
}
return(0);
}