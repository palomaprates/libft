NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_tolower.c                   \
			ft_toupper.c                 \
			ft_substr.c                  \
			ft_strrchr.c                 \
			ft_strnstr.c                 \
			ft_strncmp.c                 \
			ft_strmapi.c                 \
			ft_strlen.c                  \
			ft_strlcpy.c                 \
			ft_strlcat.c                 \
			ft_strjoin.c                 \
			ft_split.c                   \
			ft_striteri.c                \
			ft_strdup.c                  \
			ft_strchr.c                  \
			ft_putstr_fd.c               \
			ft_putnbr_fd.c               \
			ft_putendl_fd.c              \
			ft_putchar_fd.c              \
			ft_memset.c                  \
			ft_memmove.c                 \
			ft_memcpy.c                  \
			ft_memcmp.c                  \
			ft_memchr.c                  \
			ft_itoa.c                    \
			ft_isprint.c                 \
			ft_isdigit.c                 \
			ft_isascii.c                 \
			ft_isalpha.c                 \
			ft_isalnum.c                 \
			ft_calloc.c                  \
			ft_bzero.c                   \
			ft_atoi.c                    \
			ft_strtrim.c                 \

BONUS = ft_lstnew.c                    \
			ft_lstadd_front.c             \
			ft_lstsize.c                  \
			ft_lstlast.c                  \
			ft_lstadd_back.c              \
			ft_lstiter.c                  \
			ft_lstdelone.c                \
			ft_lstclear.c                 \

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

all: $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)

$(BONUS_OBJS): $(BONUS)
	$(CC) $(CFLAGS) -c $(BONUS)
	ar rcs $(NAME) $(BONUS_OBJS)

clean:
	 rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

