NAME := libftprintf.a

NAME_LIBFT := libft.a

LIBFT_DIR = libft

SRC := ft_printf.c \
ft_character_conversion.c \
ft_number_conversion.c \
ft_hex_conversion.c \

OBJ := ft_printf.o \
ft_character_conversion.o \
ft_number_conversion.o \
ft_hex_conversion.o \

CC := gcc 

CFLAGS := -Wall -Wextra -Werror -g

AR := ar

AR_FLAGS := rcs

ARCHIVE := $(AR) $(AR_FLAGS)

all: $(NAME_LIBFT) $(NAME)

$(NAME): $(OBJ)
	cp $(LIBFT_DIR)/$(NAME_LIBFT) $(NAME)
	$(ARCHIVE) $(NAME) $(OBJ)

$(OBJ):
	$(CC) $(CFLAGS) -c $(SRC)

$(NAME_LIBFT):
	$(MAKE) bonus -C $(LIBFT_DIR)

main: $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME) && ./a.out

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	rm -rf $(OBJ)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re main
