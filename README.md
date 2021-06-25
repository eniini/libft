## libft
### General utility library for 42 School studies
Gradually rewriting standard C library functions as a study of Unix pipeline and languages' core elements that also doubles as the fundamental toolkit for more complex 42 curriculum projects. 
Includes sublibraries for printf and specialized graphics functions, latter of which is very in-progress. The static libraries can be compiled by themselves or packed into one.  
Current version of libft uses libc headers only for the necessary datatypes, memory management and file I/O.  

Array utils | Char typechecks | File I/O | Linked list utility | Math utils | Memory manipulation | Process control | String utils | Wide char (UTF-8) utils | Type conversions
--- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
`free_arr` | `isalnum` `isalpha` `isascii` `isdigit` `isspace` `isprint` | `get_next_line` | `lstnew` | `abs` | `bzero` | `getout` | `strcpy` `strncpy` | `putwchar` | `atoi` |
`get_arr_size` | `islower` `isupper` | `printf` `fprintf` | `lstdel` `lstdelone` | `clamp_i` `clamp_d` | `memalloc` || `strcat` `strncat` `strlcat` | `putwstr` | `ftoa` |
|| `tolower` `toupper` | `putchar` `putchar_fd` `putstr` `putstr_fd` `putendl` `putendl_fd` `putnbr` `putnbr_fd` | `elemdel` | `pow` | `memchr` || `strdup` `strndup` | `wcharlen` | `itoa` `itoa_base` |
|||| `lstadd` `lstaddl` || `memcmp` || `strnew` | `wstrlen` `wstrnlen` | `uitoa` `uitoa_base` |
|||| `lstiter` || `memcpy` `memccpy` || `strdel` |||
|||| `lstmap` || `memdel` || `strclr` |||
|||||| `memmove` || `striter` `striteri` |||
|||||| `memset` || `strmap` `strmapi` |||
|||||| `swap` || `strsub` |||
|||||||| `strjoin` |||
|||||||| `strtrim` |||
|||||||| `strsplit` |||
|||||||| `strlen` |||
|||||||| `strcmp` `strncmp` |||
|||||||| `strchr` `strrchr` |||
|||||||| `strstr` `strnstr` |||
|||||||| `strequ` `strnequ` |||
|||||||| `wordcount` |||

| Graphics |
| :---: |
| `argb_lerp` |
| `color_lerp` |
| `i_lerp` `d_lerp` `inverse_i_lerp` `inverse_d_lerp` |
| `create_bmp` `load_bmp` |
| `hueshift` |
| `argb_greyscale` `argb_realgrayscale` |
| `init_1d_info` `init_2d_info` |
| `smoothstep` |
