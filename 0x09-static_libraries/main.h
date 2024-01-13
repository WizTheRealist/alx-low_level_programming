#ifndef MAIN_H
#define MAIN_H

char *cap_string(char *);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *leet(char *);
char *rot13(char *);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *string_toupper(char *);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _abs(int);
int add(int, int);
int _atoi(char *s);
int _isalpha(int c);
int _isdigit(int c);
int _islower(int c);
int _isupper(int c);
int mul(int a, int b);
int print_last_digit(int);
int print_sign(int n);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
void jack_bauer(void);
void more_numbers(void);
void print_alphabet(void);
void print_alphabet_x10(void);
void print_array(int *a, int n);
void print_buffer(char *b, int size);
void print_diagonal(int n);
void print_line(int n);
void print_most_numbers(void);
void print_number(int n);
void print_numbers(void);
void print_rev(char *s);
void print_square(int size);
void print_times_table(int n);
void print_to_98(int n);
void print_triangle(int size);
void puts2(char *str);
void _puts(char *str);
void puts_half(char *str);
void reset_to_98(int *n);
void reverse_array(int *a, int n);
void rev_string(char *s);
void swap_int(int *a, int *b);
void times_table(void);

#endif
