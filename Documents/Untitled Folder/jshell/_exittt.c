#include "shell.h"



void _exittt(char *buffer)
{
	
	pid_t pid = fork();
	int status;


   if(pid == 0)
	{
		printf("hola %s\n", buffer);
		free(buffer);
		exit(EXIT_SUCCESS);
		
	}
	else
	{
		wait(&status); 
	}
 
}