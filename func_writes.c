#include "shells.h"
/**
 * edqu_prints - function that prints to the output
 * @note: pointer to the constant character
 * Return: Printed output
 */

/*My printf function*/
void func_writes(const char *_string)
{
	write(STDOUT_FILENO, &_string, strlen(_string));
}
