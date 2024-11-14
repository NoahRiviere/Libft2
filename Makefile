#-------------------------------------------------------------------------------#
#									GENERICS									#
#-------------------------------------------------------------------------------#

DEFAULT_GOAL: all
.DELETE_ON_ERROR: $(NAME)
.PHONY: all clean fclean re
HIDE = 

#-------------------------------------------------------------------------------#
#									VARIABLES									#
#-------------------------------------------------------------------------------#

# Compiler and flags
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -I.
RM		=	rm -f

# Main target name
NAME	=	libft.a


# Bonus target name
BNAME	=	bonus

# Sources
SRCS	=	ft_atoi.c ft_memchr.c ft_split.c ft_strncmp.c \
			ft_bzero.c ft_memcmp.c ft_strchr.c ft_strnstr.c \
			ft_calloc.c ft_memcpy.c ft_strdup.c	ft_strrchr.c \
			ft_isalnum.c ft_memmove.c ft_striteri.c ft_strtrim.c \
			ft_isalpha.c ft_memset.c ft_strjoin.c ft_substr.c \
			ft_isascii.c ft_putchar_fd.c ft_strlcat.c ft_tolower.c \
			ft_isdigit.c ft_putendl_fd.c ft_strlcpy.c ft_toupper.c \
			ft_isprint.c ft_putnbr_fd.c ft_strlen.c ft_itoa.c \
			ft_putstr_fd.c   ft_strmapi.c

SRCS_B	=	ft_lstadd_back.c ft_lstadd_front.c ft_lstdelone.c \
			ft_lstsize.c ft_lstnew.c ft_lstiter.c ft_lstclear.c \
			ft_lstlast.c ft_lstmap.c

# Objects
OBJS	=	$(patsubst %.c,%.o,$(SRCS))
OBJS_B	=	$(patsubst %.c,%.o,$(SRCS_B))

# Includes
INC		=	libft.h

#-------------------------------------------------------------------------------#
#									RULES										#
#-------------------------------------------------------------------------------#

all: $(NAME)

# Main target rule
$(NAME): $(OBJS)
	ar -rcs $(NAME) $?

$(BNAME): $(OBJS_B)
	ar -rcs $(NAME) $(OBJS_B)

$(OBJS) $(OBJS_B) : %.o : %.c $(INC)
	$(HIDE)$(CC) $(CFLAGS) -c $< -o $@

#so:
#	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(SRCS_B)
#	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJS_B)

clean:
	$(HIDE)$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(HIDE)$(RM) $(NAME)

re: fclean all
