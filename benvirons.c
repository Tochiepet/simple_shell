#include "shell.h"

/**
 * k
 */
{
	for (i = 0; environ[i]; i++)
		add_node_end(&node, environ[i], 0);
	info->env = node;

	return (0);
}	
