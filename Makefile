# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 10:50:49 by umeneses          #+#    #+#              #
#    Updated: 2023/10/25 14:37:55 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

AUTHOR			= umeneses

SOURCES 		= ft_printf.c

INCLUDE			= ft_printf.h

OBJS			= $(SOURCES:.c=.o)

AR				= ar -rcs

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror

LIBFT_DIR		= ./libft/

all:			libft_lib $(NAME)

$(NAME):		$(OBJS)

libft_lib:
				$(MAKE) -C $(LIBFT_DIR)
				cp $(LIBFT_DIR)libft.a $(NAME)

%.o:			%.c
				$(CC) -c $(CFLAGS) $< -o $@
				$(AR) $(NAME) $@

clean:
				$(RM) $(OBJS)
				$(MAKE) -C $(LIBFT_DIR) clean

fclean:			clean
				$(RM) $(NAME)
				$(MAKE) -C $(LIBFT_DIR) fclean

re:				fclean all

.PHONY:			libft_lib all clean fclean re