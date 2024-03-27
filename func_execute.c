#include "shells.h"
/**
 * get_func_execute - function to execute a process
 * @_string: the command being passed
 * Return: executable process
 */

void get_func_execute(const char *_string)
{
	pid_t process_pid = fork();

	if (process_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (process_pid == 0)
	{
		/*child process*/
		char _string_path[256];

		snprintf(_string_path, sizeof(_string_path), "/bin/%s", _string);
		char *args[];

		args[] = {_string, NULL};

		execve(_string_path, args, NULL);

		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		/*Parent Process*/
		wait(NULL);
	}
}
