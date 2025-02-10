# For Fahrenheit-Celsius Table: 

%d = print as decimal integer
%6d = print as decimal integer, at least 6 characters wide
%f = print as floating point
%6f = ""
%.2f = print as floating point, 2 chars after decimal pont
%6.2f = print as floating point, at least 6 wide, and after 2 decimal point

# Symbolic Constants

It's bad practice to bury ''magic numbers'' like 300 and 20 in a program; they convey little information to someone who might have to read the program later, and they are hard to change in a systematic way. One way to deal with magic numbers is to give them meaningful names. 

A #define line defines a symbolic name or symbolic constant to be a particular string of characters: 

 _#define name replacement list_

Thereafter, any occurrence of name (not in quotes and not part of another name) will be replaced by the corresponding replacement text. The name has the same form as a variable name: a sequence of letters and digits that begins with a letter. The replacement text can be any sequence of characters; it is not limited to numbers.

# Character Input & Output

So, _getchar_ reads the next input character from a text stream and returns that as its value.

_c = getchar()_

The function _putchar_ prints a character each time it is called:

_putchar(c)_

Here, the contents of the integer variable 'c' as a character are printed.

# File Copying 

Given getchar and putchar, you can write a surprising amount of useful code without knowing anything more about input/output. The simplest example is a program that copies its input to its output one character at a time.