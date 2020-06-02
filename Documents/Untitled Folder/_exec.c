#include "shell.h"
/**
 *
 *_exec - funtion separate words
 *
 *Return: 0
 */
int _exec(char **token)
{
	pid_t pid_chid;
	int status;

	pid_chid = fork();

	if (pid_chid == -1)
	{
		perror("Error: fork");
	}
	if (pid_chid == 0)
	{

		if (execve(token[0], token, NULL) == -1)
		{
			perror("Error: execve");
		}
	}
	else
	{
		wait(&status);
	}

	return (0);
}
