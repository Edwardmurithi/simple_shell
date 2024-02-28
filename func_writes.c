#include "shells.h"
/**
 * get_func_writes - function that prints to the output
 * @_string: pointer to the constant character
 * Return: Printed output
 */

/*acts as printf function*/
void get_func_writes(const char *_string)
{
	write(STDOUT_FILENO, _string, strlen(_string));
}
