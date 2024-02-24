#include "shells.h"
/**
 * edqu_prints - function that prints to the output
 * @note: pointer to the constant character
 * Return: Printed output
 */


void edqu_prints(const char *note)
{
	write(STDOUT_FILENO, &note, strlen(note));
}
