# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 13:53:34 by umeneses          #+#    #+#              #
#    Updated: 2023/11/09 14:07:02 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= printf_tester.out

AUTHOR				= umeneses

SUCCESS				= \033[0;32m
UPDATING			= \033[0;35m
WARNING				= \033[0;33m
COLOR_OFF			= \033[0m
DONE				= @echo "$(SUCCESS)////// Done \o/\n $(COLOR_OFF)"

VALGRIND			= valgrind --leak-check=yes ./a.out

SCR_TESTERS			= printf_tester.c

SCR_FTS				= ../ft_printf.c

#INCLUDES

OBJS				= $(SCR_TESTERS:.c=.o)

AR					= ar -rcs

RM					= rm -f

CFLAGS				?= -Wall -Wextra -Werror

#NORM				= norminette -R CheckForbiddenSourcHeader

PRINTF_DIR			= $(shell dirname $(shell pwd))/

all:				printf_lib $(NAME)

$(NAME):			$(OBJS)

printf_lib:
					@echo "\n$(WARNING)Importing Printf files...\n $(COLOR_OFF)"
					$(MAKE) -C $(PRINTF_DIR)
					cp $(PRINTF_DIR)libftprintf.a $(NAME)
					$(DONE)

%.o:				%.c
					@echo "\n$(WARNING)Starting compilation...\n $(COLOR_OFF)"
					$(CC) -c $(CFLAGS) $< -o $@
					$(AR) $(NAME) $@
					$(NORM)
					$(DONE)

tester:				re printf_lib
					@echo "\n$(WARNING)Starting printf_tester...\n $(COLOR_OFF)"
					$(CC) $(SCR_FTS) $(SCR_TESTERS) $(NAME) && $(VALGRIND)
					$(DONE)

clean:
					@echo "\n$(WARNING)Removing files:\n$(UPDATING)$(OBJS)"
					$(RM) $(OBJS)
					$(MAKE) -C $(PRINTF_DIR) clean
					$(DONE)

fclean:				clean
					@echo "\n$(WARNING)Full cleanup in progress...$(UPDATING)"
					$(RM) $(NAME)
					$(MAKE) -C $(PRINTF_DIR) fclean
					$(DONE)

re:					fclean all

.PHONY:				printf_lib all clean fclean re