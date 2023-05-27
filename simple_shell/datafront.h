#ifndef STRUCTS_H
#define STRUCTS_H


/**
 * struct env_list_s - struct for environment strings
 *
 * @env_str: element for each environmnet string
 * @next: next node of linked list
 */

typedef struct env_list_s
{
	char *env_str;
	struct env_list_s *next;
} env_l;

#endif
