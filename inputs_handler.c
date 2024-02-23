#include "shells.h"
/**
 * get_command_from_user - function to accept input from user
 * @order: pointer to character
 * @size: size of inputs
 * Return: input
 */

void get_command_from_user(char *order, size_t size)
{
	if (fgets(order, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			edqu_prints("\n");
			exit(EXIT_SUCCESS);
		} else
		{
			perror("fgets");
			exit(EXIT_FAILURE);
		}
	}
		order[strcspn(order, "\n")] = '\0';
}
