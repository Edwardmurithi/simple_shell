#include "shells.h"
/**
 * main - entry point function
 * @void: Parameter
 * Return: entry values
 */

int main(void)
{
	char eq_order[120];

	while (true)
	{
		show_prompt();
		get_command_from_user(eq_order, sizeof(eq_order));
		execute_order(eq_order);
	}
	return 0;
}
