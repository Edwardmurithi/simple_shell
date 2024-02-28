#include "shells.h"
/**
 * main - entry point function
 * @void: Parameter
 * Return: entry values
 */

int main(void)
{
	char *args[10];
	char _string[120];

	while (true)
	{
		get_func_prompt_displayed();
		get_func_read_commands(_string, sizeof(_string));
		get_func_parse(_string, args);
		get_func_execute(_string);
	}
	return (0);
}
