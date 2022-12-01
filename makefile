
SRCS = client.c server.c
OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: credit server client

bonus: client server

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

client: client.o libft
		$(CC) -o $@ $< -Llibft -lft

server: server.o libft
		$(CC) -o $@ $< -Llibft -lft

%.o: %.c 
		$(CC) -c $(CFLAGS) $?

libft: 
		make -C libft 

clean:
		rm -f $(OBJS)
		make -C libft clean

fclean:	clean
		rm -f server client libft/libft.a 

re : fclean all 

.PHONY: all bonus libft clean fclean re
