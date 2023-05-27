#ifndef SHELL_H
#define SHELL_H

/*HEADER FILES*/
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <wait.h>
#include <fcntl.h>
#include <signal.h>


/*other header file*/
#include "datafront.h"

extern char **environ;
/*struct env_list_s *environ_list;*/
/*env_l *environ_list;*/

/*PROTOTYPES*/
char *_getenv(char *variable);
char *_strstr(char *haystack, const char *needle);

/*str_utils*/
size_t my_strlen(const char *str);
char *my_strcpy(char *dest, const char *str);
char *my_strcat(char *dest, const char *src);
char *my_strdup(char *str);
int my_strcmp(const char *s1, const char *s2);
/*io_utils*/
int _putchar(char c);
int _puts(char *str);
int my_strcmp(const char *str1, const char *str2);
/*readline*/
int readline(char *argv, int exec_count);
char **tokenize(char *str, char *delim);
void handle_error(char *msg, int exit_code);
int is_white_space(char *str);
/*exec_cmd*/
int exec_builtin(char **av, char *lineptr, char *argv, int exec_count,
		char **commands, char *lineptr_copy);
int exec_exec(char **av, char *lineptr, char *argv, int exec_count,
		char **commands, char *lineptr_copy);
int handle_Commandline_Argu(char *line, char **args);
void freeLAP(char **av, char **commands, char *lineptr,
		char *path, char *lineptr_copy);
/*builtin*/
int _env(char **av, char *lineptr, char **commands, char *lineptr_copy);
int exit_shell(char **av, char *lineptr, char **commands, char *lineptr_copy);
int _cd(char **av, char *lineptr, char **commands, char *lineptr_copy);
/*loop*/
int loop(char *argv);
/*path*/
char *setpath(char **av);
char *check_exec(char **path_arr, char *cmd, char *paths);
/*_strtok*/
char *_strtok(char *str, const char *delim);
char *skip_preceeding_delim(char *str, const char *delim);
/* getline */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
/*env_utils*/
int _setenv(const char *name, const char *value, int overwrite);
char *set_env_str(const char *name, const char *value);
/*env_utils_0x0*/
env_l *make_environ(char **str);
char **make_environ_arr(char **str);
char *getenvstr(const char *name);
/*array_utils*/
int count_array_elem(char **arr);
void free_arr(char **arr);
/*error_utils*/
int handle_error_msg(char *argv, int exec_count, char *cmd, char *msg);
char *_itoa(int num);
/*test_utils*/
void print_arr(char **arr);
#endif
