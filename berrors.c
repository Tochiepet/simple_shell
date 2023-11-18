#include "shell.h"

/**
 *_eputs - prints an input string
   the string to be printed
 */
	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
