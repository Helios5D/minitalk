NAME=libft.a

SRCSDIR=srcs

SRCS=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c\
		ft_printf/ft_printf.c ft_printf/tools_1.c ft_printf/tools_2.c

BONUSSRCS=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS=$(SRCS:.c=.o)

BONUSOBJS=$(BONUSSRCS:.c=.o)

CFLAGS=-Wall -Wextra -Werror

CC=cc

INCLUDES=.

RM=rm -f

AR=ar rc

RAN=ranlib

BLUE = \033[1;36m
GREEN = \033[1;32m
NC = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@echo -e '$(BLUE)Creating Library$(NC)'
	@$(AR) $(NAME) $(OBJS)
	@$(RAN) $(NAME)
	@echo -e '$(GREEN)Library $(NAME) created successfully$(NC)'

%.o: %.c
	@echo -e '$(BLUE)Compiling $<$(NC)'
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo -e '$(GREEN)Compiled $< successfully$(NC)'

bonus: $(OBJS) $(BONUSOBJS)
	@echo -e '$(BLUE)Creating Library$(NC)'
	@$(AR) $(NAME) $(OBJS) $(BONUSOBJS)
	@$(RAN) $(NAME)
	@echo -e '$(GREEN)Library $(NAME) created successfully$(NC)'

clean:
	@echo -e '$(BLUE)Cleaning up library object files$(NC)'
	@$(RM) $(OBJS) $(BONUSOBJS)
	@echo -e '$(GREEN)Library object files cleaned up successfully$(NC)'

fclean: clean
	@echo -e '$(BLUE)Cleaning up library$(NC)'
	@$(RM) $(NAME)
	@echo -e '$(GREEN)Library cleaned up successfully$(NC)'

re: fclean all

.PHONY: all bonus clean fclean re
