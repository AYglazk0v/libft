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
				ft_putnbr_fd.c 
				
		
SRC_BONUS	=	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

OBJ_NAME	=	${SRC_NAME:.c=.o}
OBJ_BONUS	=	${SRC_BONUS:.c=.o}
CFLAGS		=	-Wall -Wextra -Werror
CC			=	gcc
RM			= 	rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJ_NAME}
				ar rcs ${NAME} ${OBJ_NAME}

bonus:	${OBJ_NAME} ${OBJ_BONUS}	
				ar rcs ${NAME} ${OBJ_NAME} ${OBJ_BONUS}

.PHONY: 		all clean fclean re bonus

all:	${NAME}

clean:
				${RM} ${OBJ_NAME} ${OBJ_BONUS}

fclean:	clean	
				${RM} ${NAME}

re: fclean all
