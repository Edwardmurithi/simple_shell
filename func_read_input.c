#include "shells.h"
/**
 * get_func_read_commands - function to accept input from user
 * @_string: pointer to character
 * @size: size of inputs
 * Return: input
 */

void get_func_read_commands(char *_string, size_t size)
{
	if (fgets(_string, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			get_func_writes("\n");
			exit(EXIT_SUCCESS);
		} else
		{
			perror("fgets");
			exit(EXIT_FAILURE);
		}
	}
		_string[strcspn(_string, "\n")] = '\0';/*remove newline*/
}
