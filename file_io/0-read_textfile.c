/**
*read_textfile - Reads a text file and prints it to POSIX stdout.
*@filename: The name of the file to read.
*@letters: The number of letters it should read and print.
*Return: The actual number of letters it could read and print.
*0 if the file can not be opened or read, filename is NULL,
*or if write fails or does not write the expected amount of bytes.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nread, nwritten;
char *buffer;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}
nread = read(fd, buffer, letters);
if (nread == -1)
{
free(buffer);
close(fd);
return (0);
}
nwritten = write(STDOUT_FILENO, buffer, nread);
free(buffer);
close(fd);
if (nwritten != nread)
return (0);
return (nwritten);
}
