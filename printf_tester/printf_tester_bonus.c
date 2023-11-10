/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:36:01 by umeneses          #+#    #+#             */
/*   Updated: 2023/11/10 14:46:00 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/ft_printf_bonus.h"
#include <stdio.h>

int	main(void)
{
	int	lenght;
	int	my_len;

	printf("\033[0;34m");
	ft_printf("\n________________");
	ft_printf("\n|| CHAR ||\n");
	lenght = printf("c= %c %c %c %c ", '0', '0' - 256, 0, ' ');
	printf("lenght = %i\n", lenght);
	printf("\033[0;33m\n");
	my_len = ft_printf("c= %c %c %c %c ", '0', '0' - 256, 0, ' ');
	printf("my_len = %i\n", my_len);
	printf("\033[0;34m");
	ft_printf("\n________________");
	ft_printf("\n|| STRING ||\n");
	lenght = printf("s= %s %s %s %s ", "", "string", "-", "4");
	printf("lenght = %i\n", lenght);
	printf("\033[0;33m\n");
	my_len = ft_printf("s= %s %s %s %s ", "", "string", "-", "4");
	printf("my_len = %i\n", my_len);
	printf("\033[0;34m");
	ft_printf("\n________________");
	ft_printf("\n|| INTERGER ||\n");
	lenght = printf("i= %i %i %i ", 0, 101, -15);
	printf("lenght = %i\n", lenght);
	printf("\033[0;33m\n");
	my_len = ft_printf("i= %i %i %i ", 0, 101, -15);
	printf("my_len = %i\n", my_len);
	printf("\033[0;34m");
	ft_printf("\n________________");
	ft_printf("\n|| DECIMAL ||\n");
	lenght = printf("d= %d %d %d ", 0, -1, 100);
	printf("lenght = %i\n", lenght);
	printf("\033[0;33m\n");
	my_len = ft_printf("d= %d %d %d ", 0, -1, 100);
	printf("my_len = %i\n", my_len);
	printf("\033[0;34m");
	ft_printf("\n________________");
	ft_printf("\n|| UNSIGNED ||\n");
	lenght = printf("u= %u %u %u ", 0, -1, 100);
	printf("lenght = %i\n", lenght);
	printf("\033[0;33m\n");
	my_len = ft_printf("u= %u %u %u ", 0, -1, 100);
	printf("my_len = %i\n", my_len);
	printf("\033[0;34m");
	ft_printf("\n________________");
	ft_printf("\n|| PERCENTUAL ||\n");
	lenght = printf("%%= %% %%%%    %% ");
	printf("lenght = %i\n", lenght);
	printf("\033[0;33m\n");
	my_len = ft_printf("%%= %% %%%%    %% ");
	printf("my_len = %i\n", my_len);
	printf("\033[0;34m");
	ft_printf("\n________________");
	ft_printf("\n|| HEXADECIMAL LOWER ||\n");
	lenght = printf("x= %x %x ", -9, 100);
	printf("lenght = %i\n", lenght);
	printf("\033[0;33m\n");
	my_len = ft_printf("x= %x %x ", -9, 100);
	printf("my_len = %i\n", my_len);
	printf("\033[0;34m");
	ft_printf("\n________________");
	ft_printf("\n|| HEXADECIMAL UPPER ||\n");
	lenght = printf("X= %X %X ", -1, 100);
	printf("lenght = %i\n", lenght);
	printf("\033[0;33m\n");
	my_len = ft_printf("X= %X %X ", -1, 100);
	printf("my_len = %i\n", my_len);
	printf("\033[0;34m");
	ft_printf("\n________________");
	ft_printf("\n|| POINTER ||\n");
	lenght = printf("p= %p %p %p ", (void *)-1, (void *)15, (void *)16);
	printf("lenght = %i\n", lenght);
	printf("\033[0;33m\n");
	my_len = ft_printf("p= %p %p %p ", (void *)-1, (void *)15, (void *)16);
	printf("my_len = %i\n", my_len);
	printf("\033[0;34m");
	ft_printf("________________\n");
	ft_printf("\n|| ---BONUS---BONUS---BONUS--- ||\n");
	ft_printf("|| ---BONUS---BONUS---BONUS--- ||\n");
	ft_printf("|| ---BONUS---BONUS---BONUS--- ||\n");
	ft_printf("\n|| SHARP ||\n");
	lenght = printf("#= %#x %#x %#x %#x ", 0, -1, 9, 100);
	printf("lenght = %i\n", lenght);
	printf("\033[0;33m\n");
	my_len = ft_printf("#= %#x %#x %#x %#x ", 0, -1, 9, 100);
	printf("my_len = %i\n", my_len);
	printf("\033[0;34m");
	ft_printf("________________\n");
	return (0);
}
