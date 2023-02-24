#include "main.h"
/**
 * _getenv - find the env vari. name
 * @name: variable name
 * Return: NULL if fails or pointer to value of env.var.
 */
char *_getenv(const char *name)
{
	int i;
	int j;
	char *a;
	char *copy;

	for (i = 0 ; environ[i] != NULL ; i++)
	{
		for (j = 0 ; name[j] == environ[i][j] && name[j] != '\0' ; j++)
		{
			if (name[j + 1] == '\0')
			{
				a = &environ[i][j + 2];
				copy = malloc(sizeof(char) * _strlen(a) + 1);

				if (!copy)
					return (NULL);

				copy = _strcpy(copy, a);
				return (copy);
			}
		}
	}
	return (NULL);
}
/**
 * _getline - get line command line from the prompt
 * @buffer: command buffer line string.
 * @size: size of the command buffer lines.
 * @std: file stream where comes the command buffer line.
 * Return: number of bytes copied in the buffer.
 **/
ssize_t _getline(char **buffer, size_t *size, FILE *std)
{
	size_t count = 0;
	size_t alloc = 1024;
	int c;

	if (!buffer || !size || !std)
		return (-1);
	if (*buffer == NULL)
	{
		*buffer = malloc(alloc);
		if (!(*buffer))
			return (-1);
	}
	while ((c = _getchar()) != EOF)
	{
		if (c == '\n')
		{
			count++;
			break;
		}
		count++;
		(*buffer)[count - 1] = c;
	}
	if (c == EOF)
	{
		return (-1);
	}
	(*buffer)[count] = '\0';
	return (count);
}
/**
 * splitline - get line command line from the prompt
 * @buffer: command line string.
 * Return: a pointer to string of command strings.
 **/
char **splitline(char *buffer)
{
	char **argv;
	int size = 100;
	int c = 0;
	char *token;

	argv = malloc(sizeof(char *) * size);
	if (argv == NULL)
		exit(EXIT_FAILURE);
	token = _strtok(buffer, " ");
	while (token != NULL)
	{
		argv[c++] = token;
		token = _strtok(NULL, " ");
	}
	argv[c] = NULL;
	return (argv);
}


/**
 * execute_process - execute process function
 * @argm: arguments from command_line
 * @argv: string of arguments
 * @counter: number of ecution processes
 * Return: 0 (Success) -1 (Failed)
 **/
int execute_process(char **argm, char **argv, int counter)
{
	pid_t child_process;
	int status, status_output = 0;
	char *buffer = NULL, *command_path = NULL;

	command_path = check_path(argm[0]);
	if (command_path == NULL)
	{
		buffer = execute_command(argm[0]);
		if (buffer == NULL)
		{
			_printf("%s: %d: %s: not found\n", argv[0], counter, argm[0]);
			free(buffer);
			return (1);
		}
	}
	child_process = fork();
	if (child_process < 0)
		exit(errno);
	else if (child_process == 0)
	{
		if (command_path != NULL)
		{
			if (execve(command_path, argm, environ) == -1)
				exit(errno);
		}
		if (execve(buffer, argm, environ) == -1)
			exit(errno);
	}

	wait(&status);
	if (WIFEXITED(status))
		status_output = WEXITSTATUS(status);
	free(buffer);

	return (status_output);
}
/**
 * _which - search for a command in the directories
 * @head: head
 * @av: arguments
 * Return: path of a command or nil
 **/
char *_which(link_t **head, char *av)
{
	link_t *pusher = *head;
	char *buffer;

	if (av[0] == '.' || av[0] == '/')
	{
		if (access(av, X_OK) == 0)
			return (av);
	}

	while (pusher)
	{
		buffer = _strcat(pusher->dir, "/", av);
		if (access(buffer, X_OK) == 0)
		{
			return (buffer);
		}
		free(buffer);
		pusher = pusher->next;
	}
	return (NULL);
}
