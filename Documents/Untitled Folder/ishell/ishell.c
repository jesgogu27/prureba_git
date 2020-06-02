#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#define  MAX_WORLD 10
#define  MAX_CHAR 100




void removed_endOfline(char line[])
{
	int i=0;
	while (line[i] != '\n')
	{
		i++;
	}

	line[i] = '\0';
}


void read_line(char line[])
{
	fgets(line, MAX_CHAR, stdin);
	removed_endOfline(line);
	
	if(strcmp(line,"exit") == 0)
		exit(0);
}

int process_line(char* args[], char line[])
{
int i=0;
 
args[i] = strtok(line, " ");


if(args[i] == NULL)
{
	return 1;
}

while(args[i] != NULL)
{
	
	args[i]=strtok(line, " ");
	i++;
	
}
return 1;
}

int read_parse_line(char* args[], char line[])
{

	read_line(line);
	process_line(args, line);
printf("$ ");
	return(1);
}

int main()
{
	char* args[MAX_WORLD];
	char  line[MAX_CHAR];
	int status	;

	printf("$ ");
while (read_parse_line(args, line))
{
	pid_t child_pid = fork();

	if(child_pid == 0)
	{
		execvp( args[0], args);

	}
	else
	{
		waitpid(child_pid, &status, 0); 
	}
 
}
	return (0);
}
