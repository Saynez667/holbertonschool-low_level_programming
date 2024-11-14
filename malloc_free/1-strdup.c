#include <stdlib.h>
#include <string.h>
char *_strdup(char *str)
{
char *duplicate;
size_t length;
if (str == NULL)
return (NULL);
length = strlen(str);
duplicate = malloc(sizeof(char) * (length + 1));
if (duplicate == NULL)
return (NULL);
strcpy(duplicate, str);
return (duplicate);
}
