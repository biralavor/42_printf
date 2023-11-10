# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 10:50:49 by umeneses          #+#    #+#              #
#    Updated: 2023/11/10 15:08:00 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

AUTHOR			= umeneses

SOURCES 		= ft_printf.c \
					ft_printf_utils.c

INCLUDE			= ft_printf.h

OBJS			= $(SOURCES:.c=.o)

AR				= ar -rcs

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror

LIBFT_DIR		= ./libft/

all:			libft_lib $(NAME)

$(NAME):		$(OBJS) 
				cp $(LIBFT_DIR)libft.a $(NAME)
				$(AR) $(NAME) $(OBJS)

libft_lib:
				$(MAKE) -C $(LIBFT_DIR)

%.o:			%.c
				$(CC) -c $(CFLAGS) $< -o $@

clean:
				$(RM) $(OBJS)
				$(MAKE) -C $(LIBFT_DIR) clean

fclean:			clean
				$(RM) $(NAME)
				$(MAKE) -C $(LIBFT_DIR) fclean

re:				fclean all

.PHONY:			libft_lib all clean fclean re