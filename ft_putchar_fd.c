
#include <unistd.h>
#include <stdio.h>

/*
Description     Outputs the char c to the file descriptor fd.

Param. #1       The character to output.
Param. #2       The file descriptor.

Return value    None.
*/
void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}