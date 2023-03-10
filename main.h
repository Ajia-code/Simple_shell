#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <signal.h>
#include <stdarg.h>
#include <limits.h>
#ifndef BUFF_SIZE
#define BUFF_SIZE 300
#endif
/**
 * struct link - node that contains the directories
 * @dir: directory
 * @next: position to change the node
 */
typedef struct link
{char *dir;
struct link *next;
} link_t;
/**
* struct types - struct types
* @arg: pointer to firts element.
* @func: The function associated.
*/

typedef struct types
{
	char arg;
	int (*func)(va_list);
} print;

int _printf(const char *format, ...);
int _putchar(char c);
int print_str(va_list);
int print_numbers(va_list);
int (*func_picker(const char))(va_list);
int print_char(va_list);


char *execute_command(char *argm);
extern char **environ;
char *_getenv(const char *name);
char *_strcpy(char *dest, char *src);
char *_strtok(char *str, char *delim);
char **splitline(char *command_line);
void signal_c(int sign);
int _myexit(char *line);
int _strlen(char *s);
int execute_process(char **argm, char **argv, int counter);
link_t *_add_nodeint_end(link_t **head, char *n);
size_t _print_listint(link_t *h);
link_t *_link(char *a);
char *_strcat(char *directory, char *slash, char *arg);
char *_which(link_t **head, char *av);
void free_list(link_t *head);
char *check_path(char *argm);
int _myenv(char *line, int counter, char **argv, char **env);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void assign_lineptr(char **lineptr, size_t *n, char *buffer, size_t b);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
#endif
