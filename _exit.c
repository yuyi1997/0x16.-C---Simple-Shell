#include "shell.h"

/**
 * _handle_exit - handles exiting the shelll command
 * @u_tokns: user tokens
 * @line: the command
 */

void _handle_exit(char **u_tokns, char *line)
{
	int status = 0;

	if (u_tokns[1] == NULL || (!_strcmp(u_tokns[1], "0")))
	{
		frees_tokns(u_tokns);
		free(line);
		exit(0);
	}
	status = _atoi(u_tokns[1]);
	if (status != 0)
	{
		frees_tokens(u_tokns);
		free(line);
		exit(0);
	}
	else
	{
		_puts("exit: Illegal number: ");
		_puts(u_tokns[1]);
		_puts("\n");
		exit(2);
	}

	frees_tokens(u_tokens);
	free(line);
	exit(EXIT_SUCCESS);
}
