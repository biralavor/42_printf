/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:36:01 by umeneses          #+#    #+#             */
/*   Updated: 2023/11/03 14:12:27 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	len;
	int	my_l;

	printf("\033[0;34m");
	len = printf(" %s\n", " NULL ");
	printf("len = %i\n", len);
	printf("\033[0;33m");
	my_l = ft_printf(" %s\n", '0' + 256);
	printf("my_l = %i\n", my_l);
	return (0);
}
/*
{
	printf("\033[0;34m");
	printf("original printf checker:\n \
		char = |%c|	str  = %s	intdec= %i\n \
		unsig= %u	perc = %%\n \
		hexal= %x	HEXAU = %X\n",
		'0', "string", -32767, 65535, 55555, 44444);
	printf("\033[0;33m");
	ft_printf("my printf :)\n \
		char = |%c|	str  = %s	intdec= %i\n \
		unsig= %u	perc = %%\n \
		hexal=		HEXAU=	\n", \
		'0', "string", -32767, 65535);
	return (0);
}
*/