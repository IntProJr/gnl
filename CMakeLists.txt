cmake_minimum_required(VERSION 3.13)
project(myGNL C)

set(CMAKE_C_STANDARD 99)

include_directories(./libft)

link_directories(./libft)

add_executable(myGNL get_next_line.c libft/ft_strchr.c libft/ft_strjoin.c libft/ft_strlen.c libft/ft_strncpy.c main.c
        libft/ft_lstadd.c
        libft/ft_lstnew.c
        libft/ft_strcat.c
        libft/ft_strcpy.c
        libft/ft_strdel.c
        libft/ft_strnew.c
        libft/ft_strsub.c
        libft/ft_bzero.c
        libft/ft_memalloc.c
        libft/ft_memcpy.c)