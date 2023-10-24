/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:36:01 by umeneses          #+#    #+#             */
/*   Updated: 2023/10/24 15:37:11 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "~/../../42_printf/ft_printf.h"

int	main(int argc, char **argv)
{
	int	index;

	index = 0;
	while (index < argc)
	{
		printf("\033[0;37m");
		printf("original printf sending 'string'= %s\n", argv[index]);
		printf("\033[0;34m");
		printf("\n");
		// printf("my printf = ");
		// ft_printf("%s", argv[index]);
		index++;
	}
	return (0);
}