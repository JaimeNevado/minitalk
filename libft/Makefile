# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaimenevado <jaimenevado@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/22 10:52:48 by jaimenevado       #+#    #+#              #
#    Updated: 2022/12/22 11:24:53 by jaimenevado      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_atoi.c ft_strlen.c \
		ft_toupper.c ft_tolower.c ft_strncmp.c ft_strlcat.c \
		ft_strlcpy.c ft_strlcat.c ft_strlcpy.c ft_strnstr.c \
		ft_memcpy.c ft_bzero.c ft_memmove.c ft_memset.c \
		ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c \
		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_striteri.c ft_printf_char.c \
		ft_printf_decimal.c ft_printf_hexlower.c \
		ft_printf_hexupper.c ft_printf_integer.c \
		ft_printf_pointer.c ft_printf_string.c \
		ft_printf_unsigned.c ft_printf_string.c ft_printf.c

SRCSB	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
		ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstsize_bonus.c

OBJS	= $(SRCS:.c=.o)
OBJSB	= $(SRCSB:.c=.o)
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f $(OBJSB)

re: fclean all

bonus: $(OBJSB) $(OBJS)
	ar -rc $(NAME) $(OBJSB) $(OBJS)

.PHONY: clean fclean re all bonus

