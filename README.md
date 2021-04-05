## libft
### General utility library for 42 School studies
Gradually rewriting standard C library functions as a study of Unix pipeline and languages' core elements that also doubles as the fundamental toolkit for more complex 42 curriculum projects. 
Current version of libft uses headers only for the necessary datatypes, memory management and file I/O.  
Currently includes:  

#### [Array manipulation / examination]
* free_arr
* get_arr_size

#### [Character type checks]
* isalnum / isalpha / isascii / isdigit / isspace / isprint
* islower / isupper
* tolower / toupper

#### [File I/O]
* get_next_line
* putchar / putchar_fd
* putstr/putstr_fd
* putendl / putendl_fd
* putnbr / putnbr_fd

####	[GFX utility functions]

* i_lerp
* inverse_i_lerp
* d_lerp
* inverse_d_lerp

#### [Generic linked list functions]
* lstnew
* lstdel / lstdelone
* elemdel
* lstadd / lstaddl
* lstiter
* lstmap

#### [Math utility tools]
* abs
* clamp_i
* clamp_d
* pow

#### [Memory Manipulation]
* bzero
* memalloc
* memchr
* memcmp
* memcpy / memccpy
* memdel
* memmove
* memset
* realloc
* swap

#### [Process Control]
* getout

#### [String Manipulation / Examination]
* strcpy / strncpy
* strcat / strncat
* strlcat
* strdup/strndup
* strnew
* strdel
* strclr
* striter / striteri
* strmap / strmapi
* strsub
* strjoin
* strtrim
* strsplit
* strlen
* strcmp / strncmp
* strchr / strrchr
* strstr / strnstr
* strequ / strnequ
* wordcount

#### [Wide Character (UTF-8) IO & Utility]
* putwchar
* putwstr
* wcharlen
* wstrlen / wstrnlen

#### [Type Conversions]
* atoi
* ftoa
* itoa / itoa_base 
* uitoa / uitoa_base
