# ***_printf   Project***
## Synopsis
- This is a simple implementation of printf function that formats and prints data.

---
## The definition of printf & it's function
-   The format string is composed
       of zero or more directives: ordinary characters (not %), which
       are copied unchanged to the output stream; and conversion
       specifications, each of which results in fetching zero or more
       subsequent arguments.  Each conversion specification is
       introduced by the character %, and ends with a conversion
       specifier.  In between there may be (in this order) zero or more
       flags, an optional minimum field width, an optional precision and
       an optional length modifier.
- The _printf() function produces output according to a format which is described below. This function write its output to the stdout, the standard output stream. Returns the count of printed characters when the function is successful and -1 when the function fails.

### The available convertion specifiers are:

- %c: Prints a single character.
- %s: Prints a string of characters.
- %d: Prints integers.
- %i: Prints integers.
- %b: Prints the binary representation of an unsigned decimal.
- %u: Prints unsigned integers
- %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
- %X:Prints the hexadecial representation of an unsigned decimal in uppercase letters
- %r: Prints a reversed string
- %R: Prints the Rot13 interpretation of a string
---
# Compilation
#### gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
![unnamed](https://github.com/marktipton/holbertonschool-printf/assets/126838794/b1397261-c2b4-4ef2-845c-46209821a690)

