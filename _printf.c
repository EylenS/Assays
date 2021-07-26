#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

int _printf(const char *format, ...)
{
    va_list arg;
    int i;
    int count_char; /*count the amount of chars*/
    const char *p;
    char buffer[1024];

    va_start(arg, format);
    for (p = format; *p != '\0'; p++) /*p points to format address*/
    {
        if (*p != '%')
        {
            write(1, p, 1);
            count_char++;
        }
        else
        {
            p++;
            if (*p == 'd' || *p == 'i')
            {
                i = va_arg(arg, int);
                itoa(i, buffer, 10);              /*here 10 means decimal*/
                write(1, buffer, strlen(buffer)); /*strlen: long of buffer*/
            }
            if (*p == 'u')
            {
                i = va_arg(arg, int);
                if (i <= -1)
                    i = i * (-1);
                itoa(i, buffer, 10);
                write(1, buffer, strlen(buffer));
            }
            if (*p == 'o')
            {
                i = va_arg(arg, unsigned int);
                itoa(i, buffer, 8); /*converts integer 10 to octal*/
                write(1, buffer, strlen(buffer));
            }
            if (*p == 'x')
            {
                i = va_arg(arg, int);
                itoa(i, buffer, 16); /*here 16 means hexadecimal*/
                write(1, buffer, strlen(buffer));
            }
            if (*p == 'X')
            {
                i = va_arg(arg, int);
                itoa(i, buffer, 16); /*here 16 means hexadecimal*/
                int j;
                for (j = 0; buffer[j] != '\0'; j++)
                {
                    if (buffer[j] == 'a')
                        buffer[j] = 'A';
                    if (buffer[j] == 'b')
                        buffer[j] = 'B';
                    if (buffer[j] == 'c')
                        buffer[j] = 'C';
                    if (buffer[j] == 'd')
                        buffer[j] = 'D';
                    if (buffer[j] == 'e')
                        buffer[j] = 'E';
                    if (buffer[j] == 'f')
                        buffer[j] = 'F';
                }
                write(1, buffer, strlen(buffer));
            }
        }
    }
    return count_char;
}
