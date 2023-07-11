#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFSIZE 1024

/**
 * _close - Close a file descriptor
 * @fd: File descriptor
 * Return: -1 in case of error
 */
int _close(int fd)
{
	if (!close(fd))
		return (0);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (-1);
}

/**
 * _read - Read a file
 * @file: File
 * @fd: File descriptor
 * @buff: Buffer
 * @nb: Number of bytes to read
 * Return: Number of bytes read
 */
ssize_t _read(const char *file, int fd, char *buff, size_t nb)
{
	ssize_t read_bytes = read(fd, buff, nb);

	if (read_bytes > -1)
		return (read_bytes);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	return (-1);
}

/**
 * _write - Write to a file
 * @file: File
 * @fd: File dessciptor
 * @buff: Buffer
 * @nb: Number of bytes to write
 * Return: Number of bytes written
 */
ssize_t _write(const char *file, int fd, char *buff, size_t nb)
{
	ssize_t written_bytes = write(fd, buff, nb);

	if (written_bytes > -1)
		return (written_bytes);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	return (-1);
}

/**
 * main - Main function
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: Return codes
 */
int main(int argc, const char *argv[])
{
	int fd_src, fd_dst;
	ssize_t read_bytes;
	char buff[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_src = open(argv[1], O_RDONLY);
	if (fd_src < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_dst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dst < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		_close(fd_src);
		exit(99);
	}
	while ((read_bytes = _read(argv[1], fd_src, buff, BUFSIZE)))
	{
		if (read_bytes < 0)
		{
			_close(fd_src);
			_close(fd_dst);
			exit(98);
		}
		if (_write(argv[2], fd_dst, buff, read_bytes) < 0)
		{
			_close(fd_src);
			_close(fd_dst);
			exit(99);
		}
	}
	if ((_close(fd_src) | _close(fd_dst)) < 0)
		exit(100);
	return (0);
}
