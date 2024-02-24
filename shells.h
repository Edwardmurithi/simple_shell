#ifndef SHELLS_H
#define SHELLS_H


#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/wait.h>

void get_func_prompt_displayed(void);
void get_func_writes(const char *_string);
void get_func_read_commands(char *_string, size_t size);
void get_func_execute(const char *_string);

#endif 
