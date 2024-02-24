#include "shells.h"
/**
 * execute_order - function to execute a process
 * @order: the command being passed
 * Return: executable process
 */

void execute_order(const char *order)
{
	pid_t offspring_pid = fork();

	if (offspring_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	} else if (offspring_pid == 0)
	{
		/*child process*/
		execlp(order, order, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	} else
	{
		/*Parent Process*/
		wait(NULL);
	}
}
