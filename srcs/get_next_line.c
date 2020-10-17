#include "get_next_line.h"

int		get_line(int fileno, size_t size, char **line)
{
	char buffer[BUFF_SIZE + 1];
	int ret;

	if (read(fileno, buffer, BUFF_SIZE) > 0)
	{
		buffer[BUFF_SIZE] = '\0';

		if (buffer[0] == NEWLINE)
		{
			*line = malloc(sizeof(char) * (size + 1));
			(*line)[size] = '\0';
			(*line)[size - 1] = buffer[0];
		}
		else
		{
			ret = get_line(fileno, size + 1, line);
			(*line)[size] = buffer[0];
			return (ret);
		}
	}
	else
		return (0);
}

int		get_next_line(int fileno, char **line)
{
	return (get_line(fileno, 0, line));
}