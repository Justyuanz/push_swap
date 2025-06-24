char *gnl(int fd)
{
	static char buffer[BUFFER_SIZE + 1];
	char *line;
	char *joined;
	char *temp;
	char *newline;
	int bytes;

	line = NULL;
	while (1)
	{
		if (!*buffer)
		{
			bytes = read(fd, buffer, BUFFER_SIZE);
			if (bytes <= 0)
				return line;
			buffer[bytes] = 0;
		}
		newline = strchr(buffer, '\n');
		if (newline)
		{
			temp = substr(buffer, 0, newline - buffer + 1);
			memmove(buffer, newline + 1, strlen(newline + 1) + 1);
		}
		else
		{
			temp = ft_strdup(buffer);
			*buffer = 0;
		}
		if (!line)
			line = temp;
		else
		{
			joined = strjoin(line, temp);
			free(line);
			free(temp);
			line = joined;
		}
		if (newline)
			return line;
	}
}