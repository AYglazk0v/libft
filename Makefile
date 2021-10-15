NAME 		=	 libft.a
SRC_NAME	=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_islower.c \
				ft_isspace.c \
				ft_isupper.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_strchr.c \
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
				
		
SRC_BONUS	=	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

OBJ_BONUS	=	$(SRC_BONUS:.c=.o)
OBJ_NAME	=	$(SRC_NAME:.c=.o)
CFLAGS		=	-Wall -Wextra -Werror

.PHONY: 		clean fclean re bonus
all:	$(NAME)
$(NAME): libft.h
				gcc $(CFLAGS) -c $(SRC_NAME)
				ar rc $(NAME) $(OBJ_NAME)
clean:
				rm -rf $(OBJ_NAME)
				rm -rf $(OBJ_BONUS)
fclean:	
				rm -rf $(OBJ_NAME)
				rm -rf $(OBJ_BONUS)
				rm -f $(NAME)
re:
				rm -rf $(OBJ_NAME)
				rm -rf $(OBJ_BONUS)
				rm -f $(NAME)
				gcc $(CFLAGS) -c $(SRC_NAME)
				ar rc $(NAME) $(OBJ_NAME)
bonus: libft.h		
				gcc $(CFLAGS) -c $(SRC_BONUS)
				ar rc $(NAME) $(OBJ_BONUS)
