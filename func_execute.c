#include "shells.h"
/**
 * get_func_execute - function to execute a process
 * @_string: the command being passed
 * Return: executable process
 */

void get_func_execute(const char *_string)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		/*child process*/
		execlp(_string, _string, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		/*Parent Process*/
		wait(NULL);
	}
}
