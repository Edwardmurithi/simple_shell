#include "shells.h"

/**
 * get_func_parse - Function to parse the command line
 * @_string: The command line to be parsed
 * @args: Array to store the parsed arguments
 */
void get_func_parse(char *_string, char **args)
{
	char *token;
	int counter = 0;

	token = strtok(_string, " \t\n");

	while (token != NULL && counter < 10 - 1)
	{
		args[counter++] = token;
		token = strtok(NULL, " \t\n");
	}

	args[counter] = NULL;
}
