#ifndef SHELLS_H
#define SHELLS_H


#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/wait.h>

void show_prompt(void);
void edqu_prints(const char *note);
void execute_order(const char *order);
void get_command_from_user(char *order, size_t size);



#endif 
