#include "get_next_line.h"

int		main(int argc, char *argv[])
{
	char *line = NULL;

	if (argc > 1)
	{
		int fileno = open(argv[1], O_RDONLY);

		if (fileno > 0)
		{
			for (size_t index = 1 ; get_next_line(fileno, &line) > 0 ; index++)
			{
				printf("%i - %s\n", index, line);
				free(line);
				line = NULL;
			}
		}
	}

	return (0);
}
