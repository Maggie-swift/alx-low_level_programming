#include "shell.h"

/**
 * _strtok - tokenizes a string
 *
 * @str: string to be tokenized
 * @delim: delimiter charaters to delimit string by
 *
 * Return: non-empty string
 */

char *_strtok(char *str, const char *delim)
{
	static char *updated_str;
	char *token;
	int i, j;

	 /* Return NULL if str is NULL on first call or...*/
	 /* ...set str to updated_str on subsequent call to _strtok*/
	if (!str && delim)
	{
		if (!updated_str)
			return (NULL);
		updated_str = skip_preceeding_delim(updated_str, delim);
		str = updated_str;
	}
	/*set updated_str to str on first call to _strtok*/
	if (str && !updated_str)
	{
		str = skip_preceeding_delim(str, delim);/*skip pre delimiters*/
		updated_str = str;
	}
	for (i = 0; str[i]; i++)/*search delim*/
	{
		for (j = 0; delim[j]; j++)
		{
			if (str[i] == delim[j])
			{
				token = updated_str;
				updated_str = str + i + 1;
				str[i] = '\0';
				return (token);
			}
		}

	}
	if (str[i] == '\0')
	{
		token = updated_str;
		updated_str = NULL;
		return (token);
	}
	return (NULL);
}

/**
 * skip_preceeding_delim - skips preceeding delimiter in a string
 *
 * @str: string
 * @delim: delimiters
 *
 * Return: pointer to string without preceeding delimiter
 */

char *skip_preceeding_delim(char *str, const char *delim)
{
	int signal = 0;
	int i, j, len;

	/*determine length of delimiter*/
	len = my_strlen(delim);

	/*set updated_str to point to non-delimiter character*/
	for (i = 0; str[i];)
	{
		for (j = 0; delim[j]; j++)
		{
			if (str[i] == delim[j])
			{
				str += 1;
				j = -1;
			}
			else if (j == len - 1)
			{
				signal = 1;
				break;
			}
		}
		if (signal == 1)
			break;
	}

	return (str);
}
