# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 15:41:30 by igvisera          #+#    #+#              #
#    Updated: 2023/12/16 15:48:24 by igvisera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a
OBJS		=	${SRCS:.c=.o}
CFLAGS		=	-Wall -Wextra -Werror

LIBFT_A		=	libft.a
LIBFT_SRC 	=	./libft/
LIBFT_OBJS	=	$(addprefix $(LIBFT_SRC), *.o)
LIBFT     	=	$(addprefix $(LIBFT_SRC), $(LIBFT_A))

SRCS		=	ft_printNumbers.c \
				ft_printText.c \
				ft_printf.c \

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS) $(LIBFT_OBJS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_SRC)

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_SRC) clean

fclean: clean
	rm -f $(NAME) 
	$(MAKE) -C $(LIBFT_SRC) fclean

re: fclean all

.PHONY: all clean fclean re
