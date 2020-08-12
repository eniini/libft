# libft
## recoding parts of standard C library
### currently includes following functions:

### <string.h>
##### [String Manipulation]
* strcpy/strncpy
* strcat/strncat
* strlcat (BSD)
* strdup/strndup
* strnew (Pascal)
* strdel _(nonstandard)_
* strclr _(nonstandard)_
* striter/striteri _(nonstandard)_
* strmap/strmapi _(nonstandard)_
* strsub _(nonstandard)_
* strjoin _(nonstandard)_
* strtrim _(nonstandard)_
* strsplit _(nonstandard)_

##### [String Examination]
* strlen
* strcmp/strncmp
* strchr/strrchr
* strstr/strnstr
* strequ/strnequ _(nonstandard)_
* wordcount _(nonstandard)_

##### [Memory Manipulation]
* bzero
* memalloc
* memchr
* memcmp
* memcpy/memccpy
* memdel
* memmove
* memset

##### <stdlib.h>
* atoi
* itoa _(nonstandard)_

### <stdio.h>
* get_next_line _(getline without linefeed)_
* putchar/putchar_fd _(fputc)_
* putstr/putstr_fd _(fputs with null terminator)_
* putendl _(puts)_ /putendl_fd
* putnbr/putnbr_fd

### <ctype.h>
