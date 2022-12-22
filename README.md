# My own printf function
## GENERAL
Why use the predefined function printf, when you already have your own ft_printf function?

A recoding of the predefinite function printf from the Standard Library <stdio.h> using the variadic arguments. The printf function copies a string of character to the stdout. The string can include format specifiers, which start with a % character, which indicate the method to translate a piece of data (such as a number) to characters.

## FORMAT SPECIFIERS
%c -> prints a single character.
%s -> prints a string of characters.
%d -> prints a signed integer.
%i -> prints a signed integer.
%u -> prints an unsigned integer.
%p -> prints a pointer adresse.
%x -> prints an unsigned hexadecimal integer, with lowercase.
%X -> prints an unsigned hexadecimal integer, with uppercase.
%% -> prints a percent sign.

## NORMINETTE
As all other C projects at the 42 school, the code has to written in accordance with the norm:
- only 25 lines per function
- only 5 functions per file
- only predefined functions allowed for this project are: write, malloc, free, va_start, va_arg, va_copy, va_end.

## TEST IN YOUR TERMINAL
1.
'''make'''

2.
'''gcc main.c libftprintf.a'''

3.
'''./a.out'''

## RESULT
My own usable printf function.

<img src="https://github.com/42elenz/printf/blob/main/printf_evl.png" width=80%>
