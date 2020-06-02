#include "shell.h"
/**
 * main - menu
 * Return: void
 */
int main(void)
{

	char *line;
	size_t len = 0;

	char **arguments;

	printf("$ ");

	while (getline(&line, &len, stdin) != -1)
	{

		arguments = _split_string(line);
		_exec(arguments);
		printf("$ ");
	}
	return (0);
}
