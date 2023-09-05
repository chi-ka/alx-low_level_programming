#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

void print_error(int code, const char *message)
{
    dprintf(STDERR_FILENO, "Error: %s\n", message);
    exit(code);
}

int main(int argc, char *argv[])
{
    char *file_from, *file_to;
    int fd_from, fd_to;
    char buffer[1024];
    ssize_t bytes_read;

    if (argc != 3)
    {
        print_error(97, "Usage: cp file_from file_to");
    }

    file_from = argv[1];
    file_to = argv[2];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0644);

    if (fd_to == -1) 
    {
        dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
        exit(99);
    }

    while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
        if (write(fd_to, buffer, bytes_read) != bytes_read)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
            exit(99);
        }
    }
    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }
    if (close(fd_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }
    if (close(fd_to) == -1) 
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return (0);
}

