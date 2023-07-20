#include "main.h"

/**
 * _myhistory - displays the history list, one command by line
 * @info: Structure containing potential arguments
 *
 * Return: Always 0.
 */
int _myhistory(info_t *info)
{
	print_list(info->history);
	return (0);
}
