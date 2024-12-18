#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
char *_strpbrk(char *s, char *accept);
void reset_to_98(int *n);
char *_memset(char *s, char b, unsigned int n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
int _putchar(char c);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
int is_separator(char c);
char *cap_string(char *str);
char *leet(char *);
unsigned int _strspn(char *s, char *accept);
#endif
