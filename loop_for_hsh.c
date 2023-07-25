#include "main.h"

/**
 * loophsh - A loop function
 * @args: arguments
 *
 * Return: 1 on success
 */
int loophsh(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("execvp error");
			exit(EXIT_FAILURE);
		}
	}
	else if (pid < 0)
	{
		perror("fork error");
	}
	else
	{
		while (waitpid(pid, &status, WUNTRACED) > 0)
		{
		}

	}
	return (1);
}
