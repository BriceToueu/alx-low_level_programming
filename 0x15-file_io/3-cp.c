#include "main.h"

int comp_close(int fd);

/**
 * main - Main function to copy files
 * @argc: The number of passed arguments
 * @argv: The pointers to array arguments
 * Return: 1 on success, exits on failure
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	ssize_t bytes_read, bytes_written;
	int from_fd, to_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		comp_close(from_fd);
		exit(99);
	}

	while ((bytes_read = read(from_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			comp_close(from_fd);
			comp_close(to_fd);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		comp_close(from_fd);
		comp_close(to_fd);
		exit(98);
	}

	if (comp_close(from_fd) == -1)
		exit(100);

	if (comp_close(to_fd) == -1)
		exit(100);

	return (0);
}

/**
 * comp_close - A function that closes a file and prints error when closed file
 * @fd: File descriptor to close
 * Return: 1 on success, -1 on failure
 */
int comp_close(int fd)
{
	int error = close(fd);

	if (error == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (error);
}
