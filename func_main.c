#include "shells.h"
/**
 * main - entry point function
 * @void: Parameter
 * Return: entry values
 */

int main(void)
{
	char _string[120];

	while (true)
	{
		show_prompt();
		get_command_from_user(_string, sizeof(_string));
		execute_order(_string);
	}
	return 0;
}
