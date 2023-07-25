#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int my_print(const char *design, ...);
int strlength(const char *s);
int formstring(va_list sling);
int charform(va_list champ);
int print_unsign(va_list argum);
int _putchar(char c);
int numsform(va_list nums);

#endif
