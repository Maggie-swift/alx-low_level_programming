#ifndef _SHELL_H_
#define _SHELL_H_

/**
 * simple_shell - defines Headers
 * describe Headers
*/
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <dirent.h>
#include <string.h>
#include <sys/wait.h>
#include <errno.h>
#include <sys/types.h>
#define TOKEN_BUFF_S 64
#define TOKEN_DELI " \t\r\n\a"
#define LINE_SIZE 1024

extern char **environ;
typedef struct builtins;
{
	char *arg;
	void (*builtin)(char **arg, char *li, char **env);
} builtin_list;

void promptt(void);
char *gline(void);
char **s_line(char *li);
int c_builtin(char **arg, char *li, char **env);
void exit_s(char **arg, char *li, char **env);
void env_s(char **arg, char *li, char **env);
char *get_env(char *env);
int _str_compare(char *str1, char *str2);
char *sub_str(char *x, char *x2);
char *f_path(char *file_name, char *tmp, char *er);
char *r_dir(char *er, struct dirent *s, char *f, int l, char *fp, char *t);
char *save_path(char *tmp, char *path);
int b(char *check, char **arg);
int strr_len(char *s);
int builtins_ch(char **arg);
char *find_cd(char *file_name, char *er);
int p_launch(char **arg);
void sshell(int ac, char **av, char **env);
int exe_prog(char **arg, char *li, char **env, int flow);


#endif
