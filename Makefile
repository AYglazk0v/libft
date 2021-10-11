NAME 		=	 libft.a
SRC_PATH	=	./src/
SRC_NAME	=	ft_memmove.c \
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
				ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

OBJ_NAME	=	$(SRC_NAME:.c=.o)
SRC			=	$(addprefix $(SRC_PATH),$(SRC_NAME))
HEADER		=	./inc/
CFLAGS		=	-Wall -Wextra -Werror

.SILENT:
all: $(NAME)
$(NAME):
			gcc $(CFLAGS) -c $(SRC) -I$(HEADER)
			ar rc $(NAME) $(OBJ_NAME)
			ranlib $(NAME)
clean:
	rm -rf $(OBJ_NAME)
fclean:	
	clean
	rm -f $(NAME)
