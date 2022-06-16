# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/16 18:46:54 by jucho             #+#    #+#              #
#    Updated: 2022/06/16 19:31:50 by jucho            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC		=	gcc
CFLAG	=	-Wall -Wextra -Werror

RM		=	rm -f

AR		=	ar rcs

SRCS	=	ft_printf.c ft_put_nums.c ft_put_strs.c

OBJS	=	$(SRCS:.c=.o)

%.o		:	%.c
	$(CC) $(CFLAG) -c -o $*.o $<

$(NAME)	: 	$(OBJS)
	@ $(AR) $(NAME) $(OBJS)
	
all		:	$(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
