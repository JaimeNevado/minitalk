# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaimenevado <jaimenevado@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 13:44:11 by jnevado-          #+#    #+#              #
#    Updated: 2022/12/22 11:06:34 by jaimenevado      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

CLIENT = client

SERVER = server

LIBFT = libft/libft.a

INC = -I libft

all: $(CLIENT) $(SERVER)

$(CLIENT): $(LIBFT) client.c
	@gcc $(CFLAGS) $(INC) -o $(CLIENT) client.c $(LIBFT)

$(SERVER): $(LIBFT) server.c
	@gcc $(CFLAGS) $(INC) -o $(SERVER) client.c $(LIBFT)

$(LIBFT):
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
	@make -C libft

clean:
	@make -C libft clean

fclean: clean
	@make -C libft fclean
	@rm -rf $(CLIENT) $(SERVER) 

RM = rm -rf

.PHONY: all bonus libft printf clean fclean re
