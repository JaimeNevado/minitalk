# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 13:44:11 by jnevado-          #+#    #+#              #
#    Updated: 2022/12/14 16:37:47 by jnevado-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = extras/ft_atoi.c extras/ft_isdigit.c extras/ft_printf_char.c \
		extras/ft_printf_decimal.c extras/ft_printf_hexlower.c \
		extras/ft_printf_hexupper.c extras/ft_printf_integer.c \
		extras/ft_printf_pointer.c extras/ft_printf_string.c \
		extras/ft_printf_unsigned.c extras/ft_printf.c \
		client.c server.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

${NAME}:
	${CC} -c ${CFLAGS} ${SRCS}
	ar crs ${NAME} ${OBJS}

all: ${NAME}

clean: 
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

credit:
	@echo	"                                                                                           "
	@echo	"   ▄▄▄▄███▄▄▄▄    ▄█  ███▄▄▄▄    ▄█      ███        ▄████████  ▄█          ▄█   ▄█▄ 		"
	@echo	" ▄██▀▀▀███▀▀▀██▄ ███  ███▀▀▀██▄ ███  ▀█████████▄   ███    ███ ███         ███ ▄███▀ 		"
	@echo	" ███   ███   ███ ███▌ ███   ███ ███▌    ▀███▀▀██   ███    ███ ███         ███▐██▀ 			"
	@echo	" ███   ███   ███ ███▌ ███   ███ ███▌     ███   ▀   ███    ███ ███        ▄█████▀    		"
	@echo	" ███   ███   ███ ███▌ ███   ███ ███▌     ███     ▀███████████ ███       ▀▀█████▄   		"
	@echo	" ███   ███   ███ ███  ███   ███ ███      ███       ███    ███ ███         ███▐██▄  		"
	@echo	" ███   ███   ███ ███  ███   ███ ███      ███       ███    ███ ███▌    ▄   ███ ▀███▄		"
	@echo	"  ▀█   ███   █▀  █▀    ▀█   █▀  █▀      ▄████▀     ███    █▀  █████▄▄██   ███   ▀█▀ 		"
	@echo	"    			   																			"
	@echo	"         by : jnevado-																		"

.PHONY: all bonus libft printf clean fclean re
