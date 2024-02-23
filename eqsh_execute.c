#include "shells.h"
/**
 * execute_order - function to execute a process
 * @order: the command being passed
 * Return: executable process
 */

void execute_order(const char *order)
{
	pid_t offspring_pid = fork();

