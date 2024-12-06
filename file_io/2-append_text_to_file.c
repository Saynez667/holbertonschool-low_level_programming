#include "main.h"
/**
*append_text_to_file - Appends text at the end of a file
*@filename: Name of the file
*@text_content: NULL terminated string to add at the end of the file
*Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, write_status, close_status;
size_t text_len;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
text_len = strlen(text_content);
write_status = write(fd, text_content, text_len);
if (write_status == -1 || (size_t)write_status != text_len)
{
close(fd);
return (-1);
}
}
close_status = close(fd);
if (close_status == -1)
return (-1);
return (1);
}
