NAME =	libft.a

SRC = ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_memset.c \
ft_strlen.c \
ft_memcpy.c \
ft_memmove.c \
ft_bzero.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_strchr.c \
ft_tolower.c \
ft_toupper.c \
ft_strrchr.c \
ft_strncmp.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_atoi.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_itoa.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_len_to_char.c \
ft_number_of_digits.c \

BONUS_SRC = ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c \

MAIN = main.c

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(BONUS_SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g

AR = ar

ARFLAG = rcs

ARCHIVE = $(AR) $(ARFLAG)

ifdef WITH_BONUS
SRC += $(BONUS_SRC)
endif

all: $(NAME)

$(NAME): $(OBJ)
	$(ARCHIVE) $(NAME) $(OBJ)

main: all
	$(CC) $(CFLAGS) $(MAIN) $(NAME)

bonus:
	make WITH_BONUS=1

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus main
