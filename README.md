# _PRINTF()
## Implementation of a printf() in C

In this project we implement a function similar to printf(), from the standard  library <stdio.h>.

The printd() function is of variable type, i.e. it can receive an indefinite number of arguments, following the format pointer.

## _Examples of_ __printf() usage_

**General code:** ```_printf("formating string", arg1, arg2, ...);```

**For example:**

- **Input** ```_printf("Let's try to printf a simple sentence.\n");```
- **Output** ```Let's try to printf a simple sentence.```

- **Input** ```_printf("Negative:[%d]\n", -762534);```
- **Output** ```Negative:[-762534]```

More types of combinations are possible using the specifiers, to print strings, integers and more.

## _Specifiers_
The format specifiers set the output format of the arguments.
The simplest way to write a format specifier is with the character (%) followed by a conversion character indicating the data type of the argument.

| Type |   Description | Example   |
| ------ | ------ | ------ |
| %c | Prints the corresponding ASCII character. |'H' |
| %s | Character string (ending in '\0') |"Hello world" |
| %% | Prints the % symbol | % |
| %d | Signed decimal conversion of an integer. | -762534 |
| %i | Signed decimal conversion of an integer. | -762534 |
| %u | Unsigned decimal conversion of an integer. | 2147484671|
| %o | Unsigned octal conversion of an integer |20000001777 |
| %x | Unsigned hexadecimal integer; uses "abcdef". | 800003ff|
| %x | Unsigned hexadecimal integer; uses "ABCDEF". | 800003FF|


## Files

The files contained in this repository.

| File name  |Description |
| ------ | ------ |
|[_printf.c]| Main file of the _printf() function. Where the buffer is set up and other functions are called as the format string is traversed with the pointer. |
| [function1.c] | Contains the character type specifier functions. These are %c, %s, %%. |
| [function2.c] | Contains the integer type specifier functions. These are %d, %i, %u, %o. |
| [function3.c] | Contains the hexadecimal integer type specifier functions. These are %x, %X. |
| [holberton.h] | Header file containing structure definitions, prototype functions and standard libraries. |

## Flowchart

This is the flowchart of our code. (este flowchart es solo un ejemplo de cómo quedaría)
[![1200px-Lamp-Flowchart-svg.png](https://i.postimg.cc/3xjNz7Nq/1200px-Lamp-Flowchart-svg.png)](https://postimg.cc/tsT9VKhd)

## License

**Free Software**

[![N|Solid](https://i.postimg.cc/FKh7hgp9/pngegg.png)](https://twitter.com/EylenSnchez1) [![N|Solid](https://i.postimg.cc/FKh7hgp9/pngegg.png)](https://twitter.com/Lisethav55) 

Eylen Sanchez | Liseth Arias

[//]: # (These are reference links used in the body of this note. - )

   [_printf.c]: <https://github.com/EylenS/Assays/blob/main/_printf.c>
   [function1.c]: <https://github.com/EylenS/Assays/blob/main/function1.c>
   [function2.c]: <https://github.com/EylenS/Assays/blob/main/function2.c>
   [function3.c]: <https://github.com/EylenS/Assays/blob/main/function3.c>
   [holberton.h]: <https://github.com/EylenS/Assays/blob/main/holberton.h>
