## libft
### General utility library for 42 School studies
Mainly re-writing standard C library functions both as a study of Unix pipeline and C's core elements and an essential toolkit for more complex projects.
Current version of libft uses stdlib/unistd headers only for necessary datatypes, memory management & file IO. Currently includes:

#### [String Manipulation]
* strcpy/strncpy
* strcat/strncat
* strlcat
* strdup/strndup
* strnew
* strdel
* strclr
* striter/striteri
* strmap/strmapi
* strsub
* strjoin
* strtrim
* strsplit

#### [String Examination]
* strlen
* strcmp/strncmp
* strchr/strrchr
* strstr/strnstr
* strequ/strnequ
* wordcount

#### [Memory Manipulation]
* bzero
* memalloc
* memchr
* memcmp
* memcpy/memccpy
* memdel
* memmove
* memset
* realloc
* swap

#### [Numeric Conversions]
* atoi
* itoa
* abs
* clamp_i
* clamp_d

#### [File I/O]
* get_next_line
* putchar / putchar_fd
* putstr/putstr_fd
* putendl / putendl_fd
* putnbr / putnbr_fd
* getout

#### [Character type checks]
* isalnum / isalpha / isascii / isdigit / isspace / isprint
* islower / isupper
* tolower / toupper

#### [Generic linked/list functions]
* lstnew
* lstdel / lstdelone
* elemdel
* lstadd / lstaddl
* lstiter
* lstmap

#### [Array manipulation / examination]
* free_arr
* get_arr_size


####	[Graphics-related utility functions]

* i_lerp
* inverse_i_lerp
* d_lerp
* inverse_d_lerp
