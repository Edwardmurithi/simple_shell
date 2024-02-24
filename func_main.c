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
		get_func_prompt();
		get_user_commands(_string, sizeof(_string))
		get_func_execute(_string)
	}
	return 0;
}
