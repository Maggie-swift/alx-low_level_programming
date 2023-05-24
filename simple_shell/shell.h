#ifndef SHELL_H
#define SHELL_H

/* Header inclusions */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "shell.h"
#include <unistd.h>

/* Function prototypes */
void display_prompt(void);
extern char **environ;

#endif /* SHELL_H */
