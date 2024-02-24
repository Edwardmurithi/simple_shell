#ifndef SHELLS_H
#define SHELLS_H


#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/wait.h>

void show_prompt(void);
void func_writes(const char *_string);
void get_func_execute(const char *_string)
void get_user_commands(char *_string, size_t size)

#endif 
