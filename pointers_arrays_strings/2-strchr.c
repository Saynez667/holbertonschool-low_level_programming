/**
*Verifie tout les caracteres de *s
*si le caractere que nous recherchons est c alors retourner au debut donc s
*puis augmenter de 1 lettre
*su c est identique a 0 alors retourner a s ou NULL
**/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
