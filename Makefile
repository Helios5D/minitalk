CLIENT = client

SERVER = server

CLIENT_BONUS = client_bonus

SERVER_BONUS = server_bonus

LIBFT = ./libft/libft.a

CC = cc

CFLAGS := -Wall -Wextra -Werror -g3

CLIENT_SRC = src/client.c

SERVER_SRC = src/server.c

CLIENT_SRC_BONUS = src/client_bonus.c

SERVER_SRC_BONUS = src/server_bonus.c

CLIENT_OBJ := $(CLIENT_SRC:.c=.o)

SERVER_OBJ := $(SERVER_SRC:.c=.o)

CLIENT_OBJ_BONUS := $(CLIENT_SRC_BONUS:.c=.o)

SERVER_OBJ_BONUS := $(SERVER_SRC_BONUS:.c=.o)

BLUE = \033[1;36m
GREEN = \033[1;32m
NC = \033[0m

all: $(LIBFT) $(CLIENT) $(SERVER)

bonus: $(LIBFT) $(CLIENT_BONUS) $(SERVER_BONUS)

$(LIBFT):
	@make --no-print-directory -C ./libft

$(CLIENT): $(CLIENT_OBJ)
	@echo -e '$(BLUE)Linking executable$(NC)'
	@$(CC) $(CFLAGS) $(CLIENT_SRC) $(LIBFT) -o $(CLIENT)
	@echo -e '$(GREEN)Executable $(CLIENT) linked successfully$(NC)'

$(SERVER): $(SERVER_OBJ)
	@echo -e '$(BLUE)Linking executable$(NC)'
	@$(CC) $(CFLAGS) $(SERVER_SRC) $(LIBFT) -o $(SERVER)
	@echo -e '$(GREEN)Executable $(SERVER) linked successfully$(NC)'

$(CLIENT_BONUS): $(CLIENT_OBJ_BONUS)
	@echo -e '$(BLUE)Linking executable$(NC)'
	@$(CC) $(CFLAGS) $(CLIENT_SRC_BONUS) $(LIBFT) -o $(CLIENT_BONUS)
	@echo -e '$(GREEN)Executable $(CLIENT_BONUS) linked successfully$(NC)'

$(SERVER_BONUS): $(SERVER_OBJ_BONUS)
	@echo -e '$(BLUE)Linking executable$(NC)'
	@$(CC) $(CFLAGS) $(SERVER_SRC_BONUS) $(LIBFT) -o $(SERVER_BONUS)
	@echo -e '$(GREEN)Executable $(SERVER_BONUS) linked successfully$(NC)'

%.o: %.c
	@echo -e '$(BLUE)Compiling $<$(NC)'
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo -e '$(GREEN)Compiled $< successfully$(NC)'

clean:
	@make fclean --no-print-directory -C ./libft
	@echo -e '$(BLUE)Cleaning up object files$(NC)'
	@rm -rf $(CLIENT_OBJ) $(SERVER_OBJ) $(CLIENT_OBJ_BONUS) $(SERVER_OBJ_BONUS)
	@echo -e '$(GREEN)Object files cleaned up successfully$(NC)'

fclean: clean
	@echo -e '$(BLUE)Cleaning up executable$(NC)'
	@rm -rf $(CLIENT) $(SERVER) $(CLIENT_BONUS) $(SERVER_BONUS)
	@echo -e '$(GREEN)Executable cleaned up successfully$(NC)'

re: fclean all

.PHONY: all clean fclean re
