#include "shells.h"

/**
 * get_func_cd - Function to change directory
 * @args: Array containing the directory path
 * Return: 0 on success, 1 on failure
 */
int get_func_cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "cd: missing argument\n");
		return (1);
	}

	if (chdir(args[1]) == -1)
	{
		perror("cd");
		return (1);
	}

	return (0);
}
