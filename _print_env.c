#include "shell.h"

/**
 * _print_env - prints the environment built-in var
 */

void _print_env(void)
{
	int i = 0, j = 0;

	while (environ[1])
	{
		j = 0;
		while (environ[i][j])
		{
			_putchar(environ[i][j]);
			j++;
		}

		if (j != 0)
			_putchar('\n');
		i++;
	}
}
