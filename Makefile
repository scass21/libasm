# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scass <scass@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/27 01:40:01 by scass             #+#    #+#              #
#    Updated: 2021/05/08 09:54:06 by scass            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_strlen.s ft_strcpy.s ft_strcmp.s  ft_write.s ft_read.s ft_strdup.s 
OBJS	= 	$(SRCS:.s=.o)
NAME	= 	libasm.a
RM		=	rm -f
HEADER  =   libasm.h

%.o:		%.s	$(HEADER)
			nasm -f elf64 -I. $< -o $@

all:		$(NAME)	

$(NAME):	$(OBJS) 
			ar rcs $(NAME) $? 
			@echo "libasm created"

clean:
			$(RM) $(OBJS) test

fclean:		clean
			$(RM) $(NAME) 

re:			fclean all

test:		
			clang -Wall -Wextra -Werror main.c -L. -lasm -o test
			./test

.PHONY:		all clean fclean re test