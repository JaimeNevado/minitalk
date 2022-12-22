# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaimenevado <jaimenevado@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 13:44:11 by jnevado-          #+#    #+#              #
#    Updated: 2022/12/22 12:17:20 by jaimenevado      ###   ########.fr        #
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
	@gcc $(CFLAGS) $(INC) -o $(SERVER) server.c $(LIBFT)

$(LIBFT):
	@make -C libft
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
	@echo "*******************"
	@echo ✅ Files created ✅
	@echo "*******************"

clean:
	@make -C libft clean
	@echo "******************************"
	@echo 📖 Deleting libft *.o files 📖
	@echo "******************************"

fclean: clean
	@make -C libft fclean
	@rm -rf $(CLIENT) $(SERVER)
	@echo "******************"
	@echo 🚀 Deleting all 🚀
	@echo "******************"


RM = rm -rf

.PHONY: all bonus libft printf clean fclean re
