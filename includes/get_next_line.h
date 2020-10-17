#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

# define GNL_SUCCESS 1
# define GNL_FAILURE -1
# define GNL_END_OF_FILE 0

# define BUFF_SIZE 1
# define NEWLINE '\n'

int		get_next_line(int fileno, char **line);

#endif